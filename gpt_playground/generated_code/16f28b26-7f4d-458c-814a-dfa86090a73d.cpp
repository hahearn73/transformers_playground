#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the upper half
        } else {
            high = mid - 1; // Target is in the lower half
        }
    }

    return -1; // Target not found
}

// Example usage:
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int target = 4;
//     int result = binarySearch(data, target);
//     if (result != -1) {
//         std::cout << "Element found at index: " << result << std::endl;
//     } else {
//         std::cout << "Element not found" << std::endl;
//     }
//     return 0;
// }