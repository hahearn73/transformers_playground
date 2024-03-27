using System;

class TemperatureConverter
{
    static void Main(string[] args)
    {
        Console.WriteLine("Temperature Converter");
        Console.WriteLine("1. Celsius to Fahrenheit");
        Console.WriteLine("2. Fahrenheit to Celsius");
        Console.Write("Select option (1 or 2): ");
        int choice = Convert.ToInt32(Console.ReadLine());
        
        switch (choice)
        {
            case 1:
                Console.Write("Enter temperature in Celsius: ");
                double celsius = Convert.ToDouble(Console.ReadLine());
                double fahrenheit = CelsiusToFahrenheit(celsius);
                Console.WriteLine($"{celsius}°C is equal to {fahrenheit}°F");
                break;
            case 2:
                Console.Write("Enter temperature in Fahrenheit: ");
                double fahr = Convert.ToDouble(Console.ReadLine());
                double cels = FahrenheitToCelsius(fahr);
                Console.WriteLine($"{fahr}°F is equal to {cels}°C");
                break;
            default:
                Console.WriteLine("Invalid selection.");
                break;
        }
    }

    static double CelsiusToFahrenheit(double celsius)
    {
        return (celsius * 9 / 5) + 32;
    }

    static double FahrenheitToCelsius(double fahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }
}