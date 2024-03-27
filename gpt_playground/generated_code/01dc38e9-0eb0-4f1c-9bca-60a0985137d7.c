#include <stdio.h>
#include <string.h>

// Function to calculate the Hamming distance between two strings
int hammingDistance(const char *str1, const char *str2) {
    int distance = 0;
    if (strlen(str1) != strlen(str2)) {
        return -1; // Return -1 if strings are not of equal length
    }
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            distance++;
        }
    }
    return distance;
}

int main() {
    char *string1 = "karolin";
    char *string2 = "kathrin";
    
    int distance = hammingDistance(string1, string2);
    if (distance >= 0) {
        printf("Hamming Distance: %d\n", distance);
    } else {
        printf("Strings must be of the same length.\n");
    }
    
    return 0;
}