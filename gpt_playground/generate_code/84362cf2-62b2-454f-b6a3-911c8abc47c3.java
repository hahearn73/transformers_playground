public class BinarySearch {
    public static int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid; // Target found
            } else if (arr[mid] < target) {
                left = mid + 1; // Search in right half
            } else {
                right = mid - 1; // Search in left half
            }
        }
        
        return -1; // Target not found
    }
    
    public static void main(String[] args) {
        int[] numbers = {2, 3, 4, 10, 40};
        int target = 10;
        int result = binarySearch(numbers, target);
        System.out.println(target + " found at index " + result);
    }
}