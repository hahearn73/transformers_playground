using System;

namespace RandomNumberGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            // Initialize a random number generator
            Random rand = new Random();

            // Generate a pseudorandom number between 0 and 99
            int randomNumber = rand.Next(100);

            // Output the pseudorandom number
            Console.WriteLine($"Generated Pseudorandom Number: {randomNumber}");

            // Keep the console window open
            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();
        }
    }
}