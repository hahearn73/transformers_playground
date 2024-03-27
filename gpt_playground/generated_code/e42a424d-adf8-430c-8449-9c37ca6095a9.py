import random

def generate_random_numbers(count, lower_bound, upper_bound):
    random_numbers = [random.randint(lower_bound, upper_bound) for _ in range(count)]
    return random_numbers

# Usage example
if __name__ == "__main__":
    count = 10
    lower_bound = 1
    upper_bound = 100
    random_numbers = generate_random_numbers(count, lower_bound, upper_bound)
    print(random_numbers)