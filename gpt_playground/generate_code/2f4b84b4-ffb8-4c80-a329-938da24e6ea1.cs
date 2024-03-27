using System;
using System.Linq;

class Program
{
    static bool AreAnagrams(string str1, string str2)
    {
        if (str1.Length != str2.Length)
            return false;
        
        var sortedStr1 = String.Concat(str1.OrderBy(c => c));
        var sortedStr2 = String.Concat(str2.OrderBy(c => c));
        
        return sortedStr1 == sortedStr2;
    }
    
    static void Main(string[] args)
    {
        string str1 = "listen";
        string str2 = "silent";
        
        Console.WriteLine(AreAnagrams(str1, str2) ? "The strings are anagrams." : "The strings are not anagrams.");
    }
}