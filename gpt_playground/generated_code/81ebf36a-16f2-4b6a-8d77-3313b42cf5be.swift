import Foundation

enum TemperatureUnit {
    case celsius
    case fahrenheit
}

func convertTemperature(value: Double, from: TemperatureUnit, to: TemperatureUnit) -> Double {
    switch (from, to) {
    case (.celsius, .fahrenheit):
        return (value * 9 / 5) + 32
    case (.fahrenheit, .celsius):
        return (value - 32) * 5 / 9
    default:
        return value // No conversion needed if units are the same
    }
}

// Example usage:
let celsiusValue = 0.0
let convertedToFahrenheit = convertTemperature(value: celsiusValue, from: .celsius, to: .fahrenheit)
print("\(celsiusValue)°C is \(convertedToFahrenheit)°F")

let fahrenheitValue = 32.0
let convertedToCelsius = convertTemperature(value: fahrenheitValue, from: .fahrenheit, to: .celsius)
print("\(fahrenheitValue)°F is \(convertedToCelsius)°C")