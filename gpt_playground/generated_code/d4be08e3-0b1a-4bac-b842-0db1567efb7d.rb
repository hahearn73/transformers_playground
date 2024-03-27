def convert_temperature(value, from_unit, to_unit)
  case [from_unit.downcase, to_unit.downcase]
  when ['celsius', 'fahrenheit']
    (value * 9.0 / 5) + 32
  when ['fahrenheit', 'celsius']
    (value - 32) * 5.0 / 9
  else
    "Unsupported conversion"
  end
end

# Example usage:
puts convert_temperature(100, 'Celsius', 'Fahrenheit') # Output: 212.0
puts convert_temperature(212, 'Fahrenheit', 'Celsius') # Output: 100.0