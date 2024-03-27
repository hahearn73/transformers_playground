using System;

public class Program
{
    public static void Main(string[] args)
    {
        string input = "12345";
        bool result = ContainsOnlyDigits(input);
        Console.WriteLine(result ? "Contains only digits" : "Does not contain only digits");
    }

    public static bool ContainsOnlyDigits(string input)
    {
        foreach(char c in input)
        {
            if(!char.IsDigit(c))
            {
                return false;
            }
        }
        return true;
    }
}