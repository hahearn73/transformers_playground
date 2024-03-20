from model_trainer import MODEL_PATH, TOKENIZER_PATH
from transformers import AutoModelForSequenceClassification, AutoTokenizer

tokenizer = AutoTokenizer.from_pretrained(TOKENIZER_PATH)
model = AutoModelForSequenceClassification.from_pretrained(MODEL_PATH)

with open("./example_files/example.md") as f:
    markdown_text = f.read()

with open("./example_files/example.py") as f:
    python_text = f.read()

inputs = tokenizer(markdown_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
print(logits)

inputs = tokenizer(python_text, return_tensors="pt")
outputs = model(**inputs)
logits = outputs.logits
print(logits)