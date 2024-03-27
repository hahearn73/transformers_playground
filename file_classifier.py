from collections import Counter
import json
import os
import numpy as np
from sklearn.model_selection import train_test_split
import evaluate

from transformers import AutoModelForSequenceClassification, TrainingArguments, Trainer, AutoTokenizer
from datasets import load_dataset, Dataset

MODEL_PATH = "./model"
TOKENIZER_PATH = "./model/tokenizer"
SEED = 132
CODE_DIR = "./generated_code/"
LANGUAGES_AND_EXTENSIONS_FILE = "languages_and_extensions.json"
with open(LANGUAGES_AND_EXTENSIONS_FILE) as f:
    languages_and_extensions = json.loads(f.read())
model_name = "google-bert/bert-base-cased"
tokenizer = AutoTokenizer.from_pretrained(model_name)

metric = evaluate.load("accuracy")
def compute_metrics(eval_pred, metric=metric):
    logits, labels = eval_pred
    predictions = np.argmax(logits, axis=-1)
    return metric.compute(predictions=predictions, references=labels)

def tokenize_function(examples):
    label_to_int_dict = {
        "Java": 0,
        "C": 1,
        "Python": 2,
        "C++": 3,
        "GO": 4,
        "C#": 5
    }
    labels = [label_to_int_dict[label] for label in examples["label"]]
    tokenized = tokenizer(examples["text"], padding="max_length", truncation=True)
    return {
        "input_ids": tokenized["input_ids"],
        "attention_mask": tokenized["attention_mask"],
        "labels": labels,
    }

def process_ds(ds):
    tokenized_ds = ds.map(tokenize_function, batched=True)
    tokenized_ds = tokenized_ds.remove_columns(['label', 'text'])
    tokenized_ds = tokenized_ds.rename_column('labels', 'label')
    return tokenized_ds

def main():
    texts = []
    labels = []
    for filename in os.listdir(CODE_DIR):
        _, extension = os.path.splitext(filename)
        with open(os.path.join(CODE_DIR, filename), 'r') as file:
            file_text = file.read()
        texts.append(file_text)
        labels.append(languages_and_extensions['extension_indexing'][extension])

    train_texts, test_texts = train_test_split(texts, test_size=0.2, shuffle=True, random_state=SEED)
    train_labels, test_labels = train_test_split(labels, test_size=0.2, shuffle=True, random_state=SEED)

    train_dict = {"text": train_texts, "label": train_labels}
    test_dict = {"text": test_texts, "label": test_labels}

    train_ds = Dataset.from_dict(train_dict)
    test_ds = Dataset.from_dict(test_dict)

    train_ds = process_ds(train_ds)
    test_ds = process_ds(test_ds)

    training_args = TrainingArguments(output_dir="test_trainer", evaluation_strategy='epoch', max_steps=500, seed=SEED)
    trainer = Trainer(
        model=AutoModelForSequenceClassification.from_pretrained(model_name, num_labels=6),
        args=training_args,
        train_dataset=train_ds,
        eval_dataset=test_ds,
        compute_metrics=compute_metrics,
    )
    trainer.train()
    trainer.save_model(MODEL_PATH)
    tokenizer.save_pretrained(TOKENIZER_PATH)



if __name__=="__main__":
    main()