def find_largest_element(input_list):
    if not input_list:  # Check if the list is empty
        return None
    max_element = input_list[0]  # Assume first element is the largest
    for element in input_list:
        if element > max_element:
            max_element = element
    return max_element