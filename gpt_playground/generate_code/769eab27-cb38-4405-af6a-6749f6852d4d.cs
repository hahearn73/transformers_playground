using System;

public class ShapeAreaCalculator
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Choose the shape to calculate its area:");
        Console.WriteLine("1. Circle");
        Console.WriteLine("2. Rectangle");

        int choice = Convert.ToInt32(Console.ReadLine());

        switch (choice)
        {
            case 1:
                CalculateCircleArea();
                break;
            case 2:
                CalculateRectangleArea();
                break;
            default:
                Console.WriteLine("Invalid choice.");
                break;
        }
    }

    private static void CalculateCircleArea()
    {
        Console.WriteLine("Enter the radius of the circle:");
        double radius = Convert.ToDouble(Console.ReadLine());
        double area = Math.PI * radius * radius;
        Console.WriteLine($"The area of the circle is: {area}");
    }

    private static void CalculateRectangleArea()
    {
        Console.WriteLine("Enter the length of the rectangle:");
        double length = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Enter the width of the rectangle:");
        double width = Convert.ToDouble(Console.ReadLine());
        double area = length * width;
        Console.WriteLine($"The area of the rectangle is: {area}");
    }
}