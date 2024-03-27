func isPerfectSquare(_ num: Int) -> Bool {
    let squareRoot = Int(sqrt(Double(num)))
    return squareRoot * squareRoot == num
}