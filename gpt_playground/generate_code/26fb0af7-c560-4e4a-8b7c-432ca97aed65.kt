import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)

    println("Enter the temperature in Celsius:")
    val celsius = scanner.nextDouble()

    val fahrenheit = celsiusToFahrenheit(celsius)
    println("$celsius C = $fahrenheit F")

    // For additional conversions, just uncomment and use the following:
    // println("Enter the temperature in Fahrenheit:")
    // val fahrenheitInput = scanner.nextDouble()

    // val celsiusResult = fahrenheitToCelsius(fahrenheitInput)
    // println("$fahrenheitInput F = $celsiusResult C")
}

fun celsiusToFahrenheit(celsius: Double): Double {
    return (celsius * 9/5) + 32
}

// Uncomment this function for Fahrenheit to Celsius conversion
// fun fahrenheitToCelsius(fahrenheit: Double): Double {
//     return (fahrenheit - 32) * 5/9
// }