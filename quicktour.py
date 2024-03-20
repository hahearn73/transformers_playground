import os
import torch
from transformers import DistilBertTokenizer, DistilBertForSequenceClassification, Trainer, TrainingArguments
import numpy as np
import evaluate
from datasets import Dataset

metric = evaluate.load("accuracy")
def compute_metrics(eval_pred):
    logits, labels = eval_pred
    predictions = np.argmax(logits, axis=-1)
    return metric.compute(predictions=predictions, references=labels)


training_args = TrainingArguments(output_dir="test_trainer", evaluation_strategy="epoch")
model_name = 'distilbert-base-uncased'
dataset_directory = "./example_files"
num_classes = 3

tokenizer = DistilBertTokenizer.from_pretrained(model_name, return_tensors="pt")
model = DistilBertForSequenceClassification.from_pretrained(model_name, num_labels=num_classes)

directory = "./example_files"
file_texts = []
file_types = []
for filename in os.listdir(directory):
    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath):
        file_extension = os.path.splitext(filename)[1]
        with open(filepath, 'r') as file:
            text = file.read()
            file_texts.append(text)
            file_types.append(file_extension)

dataset = Dataset.from_dict({
    "train": {"text": file_texts, "labels": file_types},
    "test": {"text": file_texts, "labels": file_types}
})

def tokenize_function(examples):
    return tokenizer(examples["text"], padding="max_length", truncation=True)

print(dataset["train"].items())
tokenized_datasets = dataset.map(tokenize_function, batched=True)
small_train_dataset = tokenized_datasets["train"].shuffle(seed=42).select(range(1000))

trainer = Trainer(
    model=model,
    args=training_args,
    train_dataset=small_train_dataset,
    eval_dataset=small_train_dataset,
    compute_metrics=compute_metrics,
)
trainer.train()