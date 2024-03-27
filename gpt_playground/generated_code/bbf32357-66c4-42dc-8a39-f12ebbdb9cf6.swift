func isPalindrome(_ str: String) -> Bool {
    let lowercasedString = str.lowercased().filter { $0.isLetter }
    return lowercasedString == String(lowercasedString.reversed())
}