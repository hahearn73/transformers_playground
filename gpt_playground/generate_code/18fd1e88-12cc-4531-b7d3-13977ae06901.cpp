#include <vector>
#include <algorithm> // for std::max_element

int findLargestElement(const std::vector<int>& numbers) {
    if (numbers.empty()) return 0; // Assuming 0 for an empty list
    return *std::max_element(numbers.begin(), numbers.end());
}