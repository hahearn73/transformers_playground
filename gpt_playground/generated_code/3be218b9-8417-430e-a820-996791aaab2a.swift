func hammingDistance(str1: String, str2: String) -> Int? {
    guard str1.count == str2.count else { return nil }
    return zip(str1, str2).filter { $0 != $1 }.count
}