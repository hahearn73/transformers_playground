using System;

class Program
{
    static void Main(string[] args)
    {
        // Example usage:
        Console.WriteLine(GCD(48, 18)); // Output should be 6
    }

    static int GCD(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}