#include <stdio.h>

int dot_product(int* vec1, int* vec2, size_t n)
{
    int total = 0;
    for (size_t i = 0; i < n; i++) 
        total += vec1[i] * vec2[i];
    return total;
}

int main()
{
    int vec1[3] = {1, 2, 2};
    int vec2[3] = {3, 56, 1};

    printf("%d", dot_product(vec1, vec2, 3));
}