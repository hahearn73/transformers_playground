import json
import os
import uuid
from openai import OpenAI

with open('apikey.txt', 'r') as f:
    api_key = f.read()
client = OpenAI(api_key=api_key)

OUTPUT_CODE_DIR = "./generated_code/"
LANGUAGES_AND_EXTENSIONS_FILE = "../languages_and_extensions.json"
PROGRAMMING_TASKS_FILE = "../programming_tasks.json"

with open(LANGUAGES_AND_EXTENSIONS_FILE) as f:
    languages_and_extensions = json.loads(f.read())
with open(PROGRAMMING_TASKS_FILE) as f:
    programming_tasks = json.loads(f.read())['programming_tasks']

def remove_first_and_last_line(text):
    lines = text.splitlines()
    if len(lines) >= 2:
        return '\n'.join(lines[1:-1])
    else:
        return ""

for language, extension in languages_and_extensions['language_indexing'].items():
    for task in programming_tasks:
        prompt = "Complete the following task in " + language + ": " + task
        print(prompt)
        completion = client.chat.completions.create(
        model="gpt-4-turbo-preview",
            messages=[
                {"role": "system", "content": "You are a programmer who can only respond in code."},
                {"role": "system", "content": "Plaintext is not allowed."},
                {"role": "system", "content": "Do not format your responses using LaTex. Only provide code as it would appear in a file."},
                {"role": "user", "content": prompt}
            ]
        )
        response_text = remove_first_and_last_line(completion.choices[0].message.content)
        with open(OUTPUT_CODE_DIR + str(uuid.uuid4()) + extension, 'w') as f:
            f.write(response_text)