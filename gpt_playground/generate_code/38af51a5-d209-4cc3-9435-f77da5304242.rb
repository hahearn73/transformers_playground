def factorial(n)
  if n == 0
    1
  else
    n * factorial(n-1)
  end
end

puts "Enter a number:"
number = gets.chomp.to_i
factorial_result = factorial(number)
puts "The factorial of #{number} is #{factorial_result}"