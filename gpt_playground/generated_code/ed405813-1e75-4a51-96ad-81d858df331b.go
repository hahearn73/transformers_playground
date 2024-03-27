package main

import (
	"fmt"
	"os"
	"strconv"
)

func factorial(n int) int {
	if n <= 1 {
		return 1
	}
	return n * factorial(n-1)
}

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Usage: go run main.go <number>")
		return
	}
	number, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Printf("Error: %s is not a valid number\n", os.Args[1])
		return
	}
	if number < 0 {
		fmt.Println("Error: Please enter a non-negative number")
		return
	}
	fmt.Printf("The factorial of %d is %d\n", number, factorial(number))
}