#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(std::string str) {
    // Convert the string to lower case for case-insensitive comparison
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Create a copy of the string and reverse it
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());

    // Check if the original string is equal to its reversed version
    return str == reversedStr;
}

// Example usage
int main() {
    std::string testStr = "Racecar";
    if(isPalindrome(testStr)) {
        std::cout << testStr << " is a palindrome.\n";
    } else {
        std::cout << testStr << " is not a palindrome.\n";
    }
    return 0;
}