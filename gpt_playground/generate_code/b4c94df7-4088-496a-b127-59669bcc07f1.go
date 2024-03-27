package main

import (
    "fmt"
)

func main() {
    fmt.Println("Temperature Converter")
    var inputTemp float64
    var unit string

    fmt.Print("Enter temperature (e.g., 25C or 77F): ")
    fmt.Scanf("%f%s", &inputTemp, &unit)

    switch unit {
    case "C", "c":
        fmt.Printf("%.2fC is %.2fF\n", inputTemp, celsiusToFahrenheit(inputTemp))
    case "F", "f":
        fmt.Printf("%.2fF is %.2fC\n", inputTemp, fahrenheitToCelsius(inputTemp))
    default:
        fmt.Println("Invalid unit! Please use 'C' for Celsius or 'F' for Fahrenheit.")
    }
}

func celsiusToFahrenheit(c float64) float64 {
    return (c * 9 / 5) + 32
}

func fahrenheitToCelsius(f float64) float64 {
    return (f - 32) * 5 / 9
}