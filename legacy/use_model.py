from legacy.model_trainer import MODEL_PATH, TOKENIZER_PATH
from transformers import AutoModelForSequenceClassification, AutoTokenizer
from torch import argmax

tokenizer = AutoTokenizer.from_pretrained(TOKENIZER_PATH)
model = AutoModelForSequenceClassification.from_pretrained(MODEL_PATH)

with open("./example_files/example.md") as f:
    markdown_text = f.read()
with open("./example_files/example.py") as f:
    python_text = f.read()
with open("./example_files/example.c") as f:
    c_text = f.read()
with open("./example_files/Dockerfile") as f:
    dockerfile_text = f.read()
with open("./example_files/example.java") as f:
    java_text = f.read()

inputs = tokenizer(python_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
predicted_label = argmax(logits, dim=1)
print(predicted_label)

inputs = tokenizer(markdown_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
predicted_label = argmax(logits, dim=1)
print(predicted_label)

inputs = tokenizer(dockerfile_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
predicted_label = argmax(logits, dim=1)
print(predicted_label)

inputs = tokenizer(c_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
predicted_label = argmax(logits, dim=1)
print(predicted_label)

inputs = tokenizer(java_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
predicted_label = argmax(logits, dim=1)
print(predicted_label)