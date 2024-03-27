package main

import (
	"fmt"
	"math"
)

// isPrime checks if a number is prime.
func isPrime(number int) bool {
	if number <= 1 {
		return false
	}
	for i := 2; i <= int(math.Sqrt(float64(number))); i++ {
		if number%i == 0 {
			return false
		}
	}
	return true
}

func main() {
	var number int
	fmt.Println("Enter a number:")
	fmt.Scanln(&number)

	if isPrime(number) {
		fmt.Println(number, "is prime.")
	} else {
		fmt.Println(number, "is not prime.")
	}
}