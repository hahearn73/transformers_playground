import java.util.Scanner;

public class RectangleAreaCalculator {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the console
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the length of the rectangle
        System.out.print("Enter the length of the rectangle: ");
        double length = scanner.nextDouble();

        // Prompt the user to enter the width of the rectangle
        System.out.print("Enter the width of the rectangle: ");
        double width = scanner.nextDouble();

        // Calculate the area of the rectangle
        double area = calculateRectangleArea(length, width);

        // Print the area of the rectangle
        System.out.println("The area of the rectangle is: " + area);

        // Close the Scanner object to release resources
        scanner.close();
    }

    // Method to calculate the area of a rectangle
    public static double calculateRectangleArea(double length, double width) {
        return length * width;
    }
}
