#include <stdio.h>

// Function to concatenate two strings
void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string to the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add the null terminator at the end
    str1[i] = '\0';
}

int main() {
    char str1[100];
    char str2[];

    concatenate(str1, str2);

    printf("%s\n", str1);

    return 0;
}
