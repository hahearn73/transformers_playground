fun hammingDistance(str1: String, str2: String): Int {
    if (str1.length != str2.length) {
        throw IllegalArgumentException("Strings must be of the same length")
    }

    return str1.indices.count { str1[it] != str2[it] }
}