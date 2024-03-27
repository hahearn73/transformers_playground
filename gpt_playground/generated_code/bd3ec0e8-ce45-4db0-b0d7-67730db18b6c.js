function gcd(a, b) {
    // Base case
    if (b == 0) return a;
    // Recursive case
    return gcd(b, a % b);
}