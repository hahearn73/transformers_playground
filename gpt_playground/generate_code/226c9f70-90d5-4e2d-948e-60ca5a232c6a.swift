func binarySearch<T: Comparable>(_ arr: [T], target: T) -> Int? {
    var lowerBound = 0
    var upperBound = arr.count

    while lowerBound < upperBound {
        let midIndex = lowerBound + (upperBound - lowerBound) / 2
        if arr[midIndex] == target {
            return midIndex
        } else if arr[midIndex] < target {
            lowerBound = midIndex + 1
        } else {
            upperBound = midIndex
        }
    }
    return nil
}

// Example usage
let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
if let index = binarySearch(numbers, target: 4) {
    print("Found at index \(index)")
} else {
    print("Not found")
}