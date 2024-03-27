package main

import (
	"fmt"
	"strings"
)

// isPalindrome checks if the input string is a palindrome.
func isPalindrome(s string) bool {
	// Normalize the string: remove spaces and make lowercase
	s = strings.ReplaceAll(s, " ", "")
	s = strings.ToLower(s)

	for i := 0; i < len(s)/2; i++ {
		if s[i] != s[len(s)-1-i] {
			return false
		}
	}
	return true
}

func main() {
	fmt.Println(isPalindrome("Racecar"))  // true
	fmt.Println(isPalindrome("Hello"))    // false
	fmt.Println(isPalindrome("A man a plan a canal Panama")) // true
}