fun isPerfectSquare(number: Int): Boolean {
    val squareRoot = kotlin.math.sqrt(number.toDouble()).toInt()
    return squareRoot * squareRoot == number
}