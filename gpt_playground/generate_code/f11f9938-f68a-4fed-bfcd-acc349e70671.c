#include <stdio.h>

// Function prototype
unsigned long long fibonacci(int n);

int main() {
    int n = 10; // Example to calculate the 10th Fibonacci number
    printf("Fibonacci number at position %d is %llu\n", n, fibonacci(n));
    return 0;
}

// Recursive function to compute the nth Fibonacci number
unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}