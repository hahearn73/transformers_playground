from collections import Counter
import numpy as np
from sklearn.model_selection import train_test_split
import evaluate

from transformers import AutoModelForSequenceClassification, TrainingArguments, Trainer, AutoTokenizer
from datasets import load_dataset, Dataset

MODEL_PATH = "./model"
TOKENIZER_PATH = "./model/tokenizer"
SEED = 132

metric = evaluate.load("accuracy")
def compute_metrics(eval_pred, metric=metric):
    logits, labels = eval_pred
    predictions = np.argmax(logits, axis=-1)
    return metric.compute(predictions=predictions, references=labels)

def process_ds(ds, tokenizer):
    ds = ds.remove_columns(["repo_name", "path", "license", "size"])
    ds = ds.rename_column("language", "label")
    ds = ds.rename_column("code", "text")
    ds = ds.filter(lambda example: example["label"] == 'Python' or example['label'] == 'Markdown' or example['label'] == 'Dockerfile' or example['label'] == 'C' or example['label'] == 'Java')

    def tokenize_function(examples):
        label_to_int_dict = {
            "Python": 0, 
            "Markdown": 1,
            "Dockerfile": 2,
            "C": 3,
            "Java": 4
        }
        labels = [label_to_int_dict[label] for label in examples["label"]]
        tokenized = tokenizer(examples["text"], padding="max_length", truncation=True)
        return {
            "input_ids": tokenized["input_ids"],
            "attention_mask": tokenized["attention_mask"],
            "labels": labels,
        }
    tokenized_ds = ds.map(tokenize_function, batched=True)
    tokenized_ds = tokenized_ds.remove_columns(['label', 'text'])
    tokenized_ds = tokenized_ds.rename_column('labels', 'label')
    return tokenized_ds

def main():
    model_name = "google-bert/bert-base-cased"
    tokenizer = AutoTokenizer.from_pretrained(model_name)

    ''' load and process dataset '''
    full_list = list(load_dataset("codeparrot/github-code", streaming=True, split="train", trust_remote_code=True).take(10_000))
    train_list, test_list = train_test_split(full_list, test_size=0.1, shuffle=True, random_state=SEED)
    train_ds = process_ds(Dataset.from_list(train_list), tokenizer)
    test_ds = process_ds(Dataset.from_list(test_list), tokenizer)

    # languages = []
    # for element in train_list:
    #     languages.append(element["language"])
    # print(Counter(languages))
    # languages = []
    # for element in test_list:
    #     languages.append(element["language"])
    # print(Counter(languages))

    ''' train '''
    training_args = TrainingArguments(output_dir="test_trainer", evaluation_strategy='epoch', max_steps=100, seed=SEED)
    trainer = Trainer(
        model=AutoModelForSequenceClassification.from_pretrained(model_name, num_labels=5),
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