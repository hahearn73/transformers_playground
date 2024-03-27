#include <stdio.h>

// Function declaration
int findLargestElement(int arr[], int length);

int main() {
    int numbers[] = {3, 5, 7, 1, 4, 9, 2, 6};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    printf("Largest Element: %d\n", findLargestElement(numbers, length));
    return 0;
}

// Function to find the largest element in a list
int findLargestElement(int arr[], int length) {
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}