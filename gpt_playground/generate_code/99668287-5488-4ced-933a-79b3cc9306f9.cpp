#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 5; // Example: find the 5th Fibonacci number
    std::cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << std::endl;
    return 0;
}