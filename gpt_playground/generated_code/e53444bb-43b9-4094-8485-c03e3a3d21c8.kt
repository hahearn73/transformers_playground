fun isPrime(n: Int): Boolean {
    if (n <= 1) {
        return false
    }
    for (i in 2..Math.sqrt(n.toDouble()).toInt()) {
        if (n % i == 0) {
            return false
        }
    }
    return true
}

fun main() {
    val number = 29
    if (isPrime(number)) {
        println("$number is a prime number.")
    } else {
        println("$number is not a prime number.")
    }
}