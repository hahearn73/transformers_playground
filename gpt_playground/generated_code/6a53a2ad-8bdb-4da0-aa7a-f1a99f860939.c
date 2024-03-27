#include <stdbool.h>
#include <string.h>

// Function to sort a string using bubble sort
void sortString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (str[j] > str[j+1]) {
                // Swap characters at position j and j+1
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

// Function to check if two strings are anagrams
bool areAnagrams(const char* str1, const char* str2) {
    // Check if lengths of two strings are same
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Copy strings to modify them without altering original strings
    char sortedStr1[strlen(str1) + 1];
    char sortedStr2[strlen(str2) + 1];
    strcpy(sortedStr1, str1);
    strcpy(sortedStr2, str2);

    // Sort both strings
    sortString(sortedStr1);
    sortString(sortedStr2);

    // Compare sorted strings
    if (strcmp(sortedStr1, sortedStr2) == 0) {
        return true;
    } else {
        return false;
    }
}