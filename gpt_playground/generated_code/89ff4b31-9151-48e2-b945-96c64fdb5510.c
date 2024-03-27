#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;
    printf("Enter number of pseudorandom numbers to generate: ");
    scanf("%d", &n);

    // Initialize random number generator
    srand(time(0));
    
    printf("Generated pseudorandom numbers: \n");
    for (i = 0; i < n; i++) {
        // Generate and print pseudorandom numbers
        printf("%d\n", rand());
    }

    return 0;
}