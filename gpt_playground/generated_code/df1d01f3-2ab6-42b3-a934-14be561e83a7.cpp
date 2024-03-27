#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial of a negative number doesn't exist.";
    } else {
        cout << "Factorial of " << number << " = " << factorial(number);
    }

    return 0;
}