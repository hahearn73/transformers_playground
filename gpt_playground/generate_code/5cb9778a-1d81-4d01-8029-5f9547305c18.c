#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("Factorial of a negative number is not defined.\n");
    else
        printf("Factorial of %d is %lld\n", number, factorial(number));
    
    return 0;
}