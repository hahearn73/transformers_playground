fun main() {
    println("Enter a number:")
    val number = readLine()?.toInt() ?: 0
    val factorial = calculateFactorial(number)
    println("Factorial of $number is: $factorial")
}

fun calculateFactorial(number: Int): Long {
    if (number == 0) {
        return 1
    }
    return number * calculateFactorial(number - 1)
}