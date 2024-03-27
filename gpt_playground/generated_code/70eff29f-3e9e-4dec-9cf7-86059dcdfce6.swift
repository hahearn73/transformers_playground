func findLargestElement(in list: [Int]) -> Int? {
    guard !list.isEmpty else { return nil }
    return list.max()
}