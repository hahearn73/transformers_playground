package main

import (
	"fmt"
)

// findLargestElement function to find the largest element
func findLargestElement(list []int) int {
	if len(list) == 0 {
		return 0 // Assuming 0 for empty list
	}
	max := list[0]
	for _, value := range list {
		if value > max {
			max = value
		}
	}
	return max
}

func main() {
	list := []int{1, 2, 3, 4, 5, 6}
	largest := findLargestElement(list)
	fmt.Printf("Largest element: %d\n", largest)
}