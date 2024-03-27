using System;

namespace FactorialCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter a number: ");
            int number = Convert.ToInt32(Console.ReadLine());

            long factorial = CalculateFactorial(number);

            Console.WriteLine($"The factorial of {number} is {factorial}.");
        }

        static long CalculateFactorial(int number)
        {
            if (number <= 1)
                return 1;
            else
                return number * CalculateFactorial(number - 1);
        }
    }
}