import json
from transformers import AutoTokenizer, CodeGenForCausalLM
import torch

LANGUAGES_AND_EXTENSIONS_FILE = "languages_and_extensions.json"
with open(LANGUAGES_AND_EXTENSIONS_FILE) as f:
    languages_and_extensions = json.loads(f.read())

programming_tasks = [
    "Implement a binary search algorithm",
    "Write a program to calculate factorial of a number",
    "Create a function to check if a string is a palindrome",
    "Implement a sorting algorithm (e.g., bubble sort, merge sort)",
    "Implement a recursive function to compute the nth Fibonacci number",
    "Write a function to find the largest element in a list",
    "Build a program to generate random passwords",
    "Create a program to convert temperature units (e.g., Celsius to Fahrenheit)",
    "Develop a program to calculate the area of common shapes (e.g., circle, rectangle)",
    "Write a program to check if a number is prime",
    "Implement a simple encryption/decryption algorithm",
    "Write a function to reverse a linked list",
    "Create a program to search for files with a specific extension in a directory",
    "Implement a basic calculator with command-line interface",
    "Write a function to check if two strings are anagrams",
    "Write a program to calculate the shortest path in a graph",
    "Write a function to detect if a string contains only digits",
    "Create a program to calculate BMI (Body Mass Index)",
    "Write a function to check if a string is an IPv4 address",
    "Write a function to calculate the distance between two points in 3D space",
    "Implement a basic sentiment analysis model using machine learning",
    "Write a function to calculate the GCD (Greatest Common Divisor) of two numbers",
    "Develop a program to convert text to Morse code",
    "Write a function to calculate the intersection of two sets",
    "Write a function to check if a number is a perfect square",
    "Build a program to convert text to Braille",
    "Write a function to calculate the Hamming distance between two strings",
    "Develop a program to generate pseudorandom numbers",
    "Write a function to calculate the roots of a quadratic equation",
]

tokenizer = AutoTokenizer.from_pretrained("Salesforce/codegen-2B-mono")
model = CodeGenForCausalLM.from_pretrained("Salesforce/codegen-2B-mono")
for language, extension in languages_and_extensions['language_indexing'].items():
    for task in programming_tasks:
        print(f"##### {language}:::{task} #####")
        prompt = "// " + language + " for " + task
        print(prompt)
        inputs = tokenizer(prompt, return_tensors="pt")
        outputs = model.generate(**inputs, num_beams=1, max_new_tokens=500)
        print(tokenizer.batch_decode(outputs, skip_special_tokens=True))