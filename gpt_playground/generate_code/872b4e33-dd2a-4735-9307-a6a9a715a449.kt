fun fibonacci(n: Int): Long {
    return if (n <= 1) n.toLong()
    else fibonacci(n-1) + fibonacci(n-2)
}