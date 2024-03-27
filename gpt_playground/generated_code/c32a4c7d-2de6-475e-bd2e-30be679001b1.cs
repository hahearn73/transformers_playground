using System;

class Program
{
    static void Main(string[] args)
    {
        string string1 = "karolin";
        string string2 = "kathrin";

        Console.WriteLine($"The Hamming Distance is: {CalculateHammingDistance(string1, string2)}");
    }

    public static int CalculateHammingDistance(string str1, string str2)
    {
        if (str1.Length != str2.Length)
        {
            throw new ArgumentException("Strings must be of equal length.");
        }

        int distance = 0;
        for (int i = 0; i < str1.Length; i++)
        {
            if (str1[i] != str2[i])
            {
                distance++;
            }
        }

        return distance;
    }
}