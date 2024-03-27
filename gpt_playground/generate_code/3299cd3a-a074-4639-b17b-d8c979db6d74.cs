using System;

class BinarySearchExample
{
    // Method to implement binary search
    public static int BinarySearchRecursive(int[] array, int left, int right, int target)
    {
        if (right >= left)
        {
            int mid = left + (right - left) / 2;

            // If the element is present at the middle itself
            if (array[mid] == target)
                return mid;

            // If element is smaller than mid, then it can only be present in left subarray
            if (array[mid] > target)
                return BinarySearchRecursive(array, left, mid - 1, target);

            // Else the element can only be present in the right subarray
            return BinarySearchRecursive(array, mid + 1, right, target);
        }

        // We reach here when element is not present in array
        return -1;
    }

    static void Main(string[] args)
    {
        int[] arr = { 2, 3, 4, 10, 40 };
        int n = arr.Length;
        int x = 10; // Element to be searched
        int result = BinarySearchRecursive(arr, 0, n - 1, x);

        if (result == -1)
            Console.WriteLine("Element not present");
        else
            Console.WriteLine("Element found at index " + result);
    }
}