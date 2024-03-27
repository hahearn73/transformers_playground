package main

import (
    "fmt"
    "unicode"
)

func containsOnlyDigits(s string) bool {
    for _, c := range s {
        if !unicode.IsDigit(c) {
            return false
        }
    }
    return true
}

func main() {
    testString := "12345"
    fmt.Println(containsOnlyDigits(testString)) // true

    testString = "123a45"
    fmt.Println(containsOnlyDigits(testString)) // false
}