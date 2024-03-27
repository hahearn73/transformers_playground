import Foundation

func factorial(_ n: Int) -> Int {
    guard n > 1 else { return 1 }
    return n * factorial(n - 1)
}

let number = 5
let result = factorial(number)
print("Factorial of \(number) is \(result)")