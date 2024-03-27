func areAnagrams(_ str1: String, _ str2: String) -> Bool {
    return str1.lowercased().sorted() == str2.lowercased().sorted()
}