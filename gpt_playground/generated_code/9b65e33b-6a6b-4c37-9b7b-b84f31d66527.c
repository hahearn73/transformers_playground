#include <stdbool.h> // for bool type
#include <string.h> // for strlen

bool isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

// Example usage
// int main() {
//     char str[] = "madam";
//     if (isPalindrome(str)) {
//         printf("%s is a palindrome\n", str);
//     } else {
//         printf("%s is not a palindrome\n", str);
//     }
//     return 0;
// }