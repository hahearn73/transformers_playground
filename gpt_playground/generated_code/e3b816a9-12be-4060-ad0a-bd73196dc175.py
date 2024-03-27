def convert_temperature(temp, from_unit, to_unit):
    if from_unit == "Celsius" and to_unit == "Fahrenheit":
        return (temp * 9/5) + 32
    elif from_unit == "Fahrenheit" and to_unit == "Celsius":
        return (temp - 32) * 5/9
    else:
        return "Conversion not supported."

# Example usage
if __name__ == "__main__":
    from_unit = "Celsius"
    to_unit = "Fahrenheit"
    temp = 20
    converted_temp = convert_temperature(temp, from_unit, to_unit)
    print(f"{temp}° {from_unit} is {converted_temp}° {to_unit}.")