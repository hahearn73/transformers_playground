func containsOnlyDigits(_ str: String) -> Bool {
    return !str.isEmpty && str.allSatisfy { $0.isNumber }
}