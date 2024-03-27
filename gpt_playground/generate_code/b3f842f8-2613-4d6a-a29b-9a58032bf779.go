package main

import (
	"fmt"
	"sort"
	"strings"
)

func areAnagrams(str1, str2 string) bool {
	if len(str1) != len(str2) {
		return false
	}

	// Convert strings to slices
	s1 := strings.Split(str1, "")
	s2 := strings.Split(str2, "")

	// Sort slices
	sort.Strings(s1)
	sort.Strings(s2)

	// Convert sorted slices back to strings
	sortedStr1 := strings.Join(s1, "")
	sortedStr2 := strings.Join(s2, "")

	// Check if sorted strings are equal
	return sortedStr1 == sortedStr2
}

func main() {
	str1 := "listen"
	str2 := "silent"

	fmt.Println("Are", str1, "and", str2, "anagrams?", areAnagrams(str1, str2))
}