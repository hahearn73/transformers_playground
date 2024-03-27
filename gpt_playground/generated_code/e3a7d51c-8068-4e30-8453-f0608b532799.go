package main

import (
    "fmt"
    "math"
)

func isPerfectSquare(num int) bool {
    squareRoot := math.Sqrt(float64(num))
    return squareRoot == float64(int(squareRoot))
}

func main() {
    testNumber := 16
    fmt.Printf("%d is a Perfect Square? %t\n", testNumber, isPerfectSquare(testNumber))
}