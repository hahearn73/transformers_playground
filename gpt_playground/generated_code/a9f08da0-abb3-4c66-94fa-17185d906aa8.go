package main

import (
	"fmt"
)

// BinarySearch takes a sorted slice of integers and an integer target value.
// It returns the index of the target if found in the slice, and -1 otherwise.
func BinarySearch(arr []int, target int) int {
	left, right := 0, len(arr)-1

	for left <= right {
		mid := left + (right-left)/2

		// Check if the target is present at mid
		if arr[mid] == target {
			return mid
		}

		// If target greater, ignore left half
		if arr[mid] < target {
			left = mid + 1
		} else {
			// If target is smaller, ignore right half
			right = mid - 1
		}
	}

	// If we reach here, then the element was not present
	return -1
}

func main() {
	arr := []int{2, 3, 4, 10, 40}
	target := 10

	result := BinarySearch(arr, target)
	if result != -1 {
		fmt.Printf("Element is present at index %d\n", result)
	} else {
		fmt.Println("Element is not present in array")
	}
}