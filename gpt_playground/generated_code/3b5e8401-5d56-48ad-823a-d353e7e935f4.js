function convertTemperature(value, unit) {
  if (unit === "CtoF") {
    return value * 9/5 + 32;
  } else if (unit === "FtoC") {
    return (value - 32) * 5/9;
  } else {
    return "Invalid unit";
  }
}

// Example usage:
console.log(convertTemperature(0, "CtoF"));  // Convert 0 Celsius to Fahrenheit
console.log(convertTemperature(32, "FtoC")); // Convert 32 Fahrenheit to Celsius