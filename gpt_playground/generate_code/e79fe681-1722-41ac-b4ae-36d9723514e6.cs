using System;

public class Program
{
    public static void Main()
    {
        Point3D point1 = new Point3D(1, 2, 3);
        Point3D point2 = new Point3D(4, 5, 6);

        double distance = CalculateDistance(point1, point2);
        
        // Display the distance - Example of usage
        Console.WriteLine($"The distance between the points is: {distance}");
    }

    public static double CalculateDistance(Point3D point1, Point3D point2)
    {
        return Math.Sqrt(Math.Pow(point2.X - point1.X, 2) 
                        + Math.Pow(point2.Y - point1.Y, 2) 
                        + Math.Pow(point2.Z - point1.Z, 2));
    }
    
    public class Point3D
    {
        public double X { get; set; }
        public double Y { get; set; }
        public double Z { get; set; }

        public Point3D(double x, double y, double z)
        {
            X = x;
            Y = y;
            Z = z;
        }
    }
}