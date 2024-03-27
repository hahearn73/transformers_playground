fun containsOnlyDigits(input: String): Boolean {
    return input.all { it.isDigit() }
}