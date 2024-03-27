using System;
using System.Collections.Generic;

public class Program
{
    public static void Main(string[] args)
    {
        // Example usage
        HashSet<int> setA = new HashSet<int>() { 1, 2, 3, 4, 5 };
        HashSet<int> setB = new HashSet<int>() { 4, 5, 6, 7, 8 };
        
        HashSet<int> intersection = CalculateIntersection(setA, setB);
        
        Console.WriteLine("Intersection:");
        foreach(int i in intersection)
        {
            Console.WriteLine(i);
        }
    }
    
    public static HashSet<int> CalculateIntersection(HashSet<int> setA, HashSet<int> setB)
    {
        setA.IntersectWith(setB);
        return setA;
    }
}