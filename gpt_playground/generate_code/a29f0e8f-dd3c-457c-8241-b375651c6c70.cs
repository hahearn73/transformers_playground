using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine(Fibonacci(10)); // Example test, calculating the 10th Fibonacci number
    }

    static int Fibonacci(int n)
    {
        if (n <= 0)
            return 0;
        else if (n == 1)
            return 1;
        else
            return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}