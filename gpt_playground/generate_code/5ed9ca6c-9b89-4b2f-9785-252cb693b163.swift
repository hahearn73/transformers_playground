import Foundation

func isPrime(number: Int) -> Bool {
    guard number > 1 else { return false }
    
    for i in 2..<number {
        if number % i == 0 {
            return false
        }
    }
    return true
}

let number = 29 // Change this number to test
if isPrime(number: number) {
    print("\(number) is a prime number.")
} else {
    print("\(number) is not a prime number.")
}