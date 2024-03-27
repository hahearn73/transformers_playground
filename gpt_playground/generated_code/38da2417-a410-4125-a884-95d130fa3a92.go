package main

import "fmt"

func gcd(a, b int) int {
    for b != 0 {
        t := b
        b = a % b
        a = t
    }
    return a
}

func main() {
    fmt.Println(gcd(60, 48)) // Example usage
}