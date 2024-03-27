#include <string>
#include <algorithm>

bool containsOnlyDigits(const std::string &str) {
    return std::all_of(str.begin(), str.end(), ::isdigit);
}