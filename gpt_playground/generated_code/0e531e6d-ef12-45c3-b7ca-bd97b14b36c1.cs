using System;

class Program
{
    static bool IsPerfectSquare(int num)
    {
        if (num < 0)
            return false;

        int root = (int)Math.Sqrt(num);
        return (root * root == num);
    }

    static void Main(string[] args)
    {
        int number = 16; // Example number
        bool result = IsPerfectSquare(number);

        Console.WriteLine($"Is {number} a perfect square? {result}");
    }
}