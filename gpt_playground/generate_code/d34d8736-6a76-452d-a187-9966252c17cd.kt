import kotlin.random.Random

fun generateRandomNumbers(count: Int, range: IntRange): List<Int> {
    return List(count) { Random.nextInt(range.start, range.endInclusive + 1) }
}

fun main() {
    val randomNumbers = generateRandomNumbers(10, 1..100)
    println(randomNumbers)
}