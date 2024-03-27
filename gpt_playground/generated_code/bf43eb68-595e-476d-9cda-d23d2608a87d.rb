def is_prime?(number)
  return false if number <= 1
  (2..Math.sqrt(number)).each do |i|
    return false if number % i == 0
  end
  true
end

number = 17  # Change this number to test
if is_prime?(number)
  puts "#{number} is a prime number."
else
  puts "#{number} is not a prime number."
end