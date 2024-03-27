#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Example usage
int main() {
    int num1 = 56;
    int num2 = 98;

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}