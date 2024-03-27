#include <string>
#include <algorithm>

bool areAnagrams(const std::string &str1, const std::string &str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;

    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());

    return sortedStr1 == sortedStr2;
}