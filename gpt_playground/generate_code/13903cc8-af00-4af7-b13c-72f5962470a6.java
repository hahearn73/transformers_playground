import java.util.Scanner;

interface Shape {
    double calculateArea();
}

class Circle implements Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * Math.pow(radius, 2);
    }
}

class Rectangle implements Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateArea() {
        return length * width;
    }
}

public class ShapeCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Select the shape to calculate area:");
        System.out.println("1. Circle");
        System.out.println("2. Rectangle");
        System.out.print("Choice: ");
        int choice = scanner.nextInt();

        Shape shape = null;

        switch (choice) {
            case 1:
                System.out.print("Enter radius of the circle: ");
                double radius = scanner.nextDouble();
                shape = new Circle(radius);
                break;
            case 2:
                System.out.print("Enter length of the rectangle: ");
                double length = scanner.nextDouble();
                System.out.print("Enter width of the rectangle: ");
                double width = scanner.nextDouble();
                shape = new Rectangle(length, width);
                break;
            default:
                System.out.println("Invalid choice.");
                break;
        }

        if (shape != null) {
            double area = shape.calculateArea();
            System.out.println("The area of the selected shape is: " + area);
        }
    }
}