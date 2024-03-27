def calculate_hamming_distance(str1, str2):
    if len(str1) != len(str2):
        raise ValueError("The two strings must have the same length.")
    return sum(char1 != char2 for char1, char2 in zip(str1, str2))