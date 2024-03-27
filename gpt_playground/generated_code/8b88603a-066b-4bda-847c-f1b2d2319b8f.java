public class Main {
    public static void main(String[] args) {
        int[] myList = {3, 45, 6, 7, 23, 5, 7, 8};
        System.out.println("Largest element in list: " + findLargest(myList));
    }

    public static int findLargest(int[] list) {
        int largest = list[0]; // Assume first element is the largest to start
        for (int i = 1; i < list.length; i++) { // Start with the second element
            if (list[i] > largest) { // Compare current element with the largest
                largest = list[i]; // Update largest if current is bigger
            }
        }
        return largest; // Return the largest element
    }
}