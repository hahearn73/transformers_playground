public class BinarySearch {

    /**
     * This method performs a binary search on a sorted array of integers
     * to find the index of a given target value.
     *
     * @param arr The array of integers, must be sorted in ascending order.
     * @param target The target integer to search for.
     * @return The index of the target if found, otherwise -1.
     */
    public static int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid; // Target found
            } else if (arr[mid] < target) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
        return -1; // Target not found
    }

    public static void main(String[] args) {
        int[] sortedArray = {1, 3, 5, 7, 9, 11, 13, 15};
        int target = 9;
        int resultIndex = binarySearch(sortedArray, target);

        System.out.println("Index of " + target + ": " + resultIndex);
    }
}