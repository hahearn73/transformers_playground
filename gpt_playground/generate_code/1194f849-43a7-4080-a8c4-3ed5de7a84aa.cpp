#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1 = 56, num2 = 98;
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2);
    return 0;
}