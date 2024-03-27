using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter a string:");
        string input = Console.ReadLine();

        if (IsPalindrome(input))
            Console.WriteLine($"{input} is a palindrome.");
        else
            Console.WriteLine($"{input} is not a palindrome.");
    }

    static bool IsPalindrome(string str)
    {
        int i = 0;
        int j = str.Length - 1;

        while (i < j)
        {
            if (str[i] != str[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
}