package main

import (
	"fmt"
)

// HammingDistance calculates the Hamming distance between two strings
func HammingDistance(str1, str2 string) (int, error) {
	if len(str1) != len(str2) {
		return 0, fmt.Errorf("strings must be of equal length")
	}

	var distance int
	for i := range str1 {
		if str1[i] != str2[i] {
			distance++
		}
	}
	
	return distance, nil
}

func main() {
	str1 := "karolin"
	str2 := "kathrin"
	distance, err := HammingDistance(str1, str2)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Hamming distance: %d\n", distance)
	}
}