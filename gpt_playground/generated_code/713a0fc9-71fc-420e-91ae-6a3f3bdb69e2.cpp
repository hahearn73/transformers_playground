#include <string>

int hammingDistance(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return -1; // Indicating error
    }

    int distance = 0;
    for (size_t i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            ++distance;
        }
    }

    return distance;
}