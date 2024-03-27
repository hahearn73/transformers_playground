#include <stdbool.h>
#include <string.h>

// Function to check if a string contains only digits
bool containsOnlyDigits(const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}