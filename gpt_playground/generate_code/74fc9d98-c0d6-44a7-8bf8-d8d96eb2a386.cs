using System;
using System.Collections.Generic;

public class Program
{
    public static void Main()
    {
        List<int> myList = new List<int> {1, 3, 5, 7, 9};
        Console.WriteLine(FindLargestElement(myList));
    }

    public static int FindLargestElement(List<int> numbers)
    {
        int largest = numbers[0];
        foreach(int num in numbers)
        {
            if(num > largest)
            {
                largest = num;
            }
        }
        return largest;
    }
}