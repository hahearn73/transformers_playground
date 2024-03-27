package main

import "fmt"

// Function to compute Fibonacci number recursively
func fibonacci(n int) int {
    if n <= 1 {
        return n
    }
    return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
    var n int
    fmt.Print("Enter the value of n: ")
    fmt.Scan(&n)
    fmt.Printf("Fibonacci number at position %d is %d\n", n, fibonacci(n))
}