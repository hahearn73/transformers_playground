#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *elements;
    int size;
} Set;

Set createSet(int[], int);
Set intersection(Set, Set);
void printSet(Set);

int main() {
    // Example sets
    int elementsA[] = {1, 2, 3, 4, 5};
    int elementsB[] = {4, 5, 6, 7, 8};
    Set setA = createSet(elementsA, sizeof(elementsA)/sizeof(elementsA[0]));
    Set setB = createSet(elementsB, sizeof(elementsB)/sizeof(elementsB[0]));

    Set resultSet = intersection(setA, setB);
    printSet(resultSet);

    // Clean up
    free(setA.elements);
    free(setB.elements);
    free(resultSet.elements);

    return 0;
}

Set createSet(int elements[], int size) {
    Set newSet;
    newSet.size = size;
    newSet.elements = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        newSet.elements[i] = elements[i];
    }
    return newSet;
}

Set intersection(Set setA, Set setB) {
    Set result;
    result.size = 0;
    result.elements = (int*)malloc(sizeof(int) * (setA.size < setB.size ? setA.size : setB.size)); // Initialize with smaller size
    for (int i = 0; i < setA.size; i++) {
        for (int j = 0; j < setB.size; j++) {
            if (setA.elements[i] == setB.elements[j]) {
                result.elements[result.size++] = setA.elements[i];
                break; // Found intersection, no need to continue inner loop
            }
        }
    }
    // Adjust memory to actual size
    result.elements = (int*)realloc(result.elements, sizeof(int) * result.size);
    return result;
}

void printSet(Set set) {
    printf("{ ");
    for (int i = 0; i < set.size; i++) {
        printf("%d ", set.elements[i]);
    }
    printf("}\n");
}