#include <stdio.h>

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
    char str1[100], str2[100];

    // Read two strings from input
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character from the end of the strings
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // Concatenate the strings
    concatenate(str1, str2);

    printf("%s\n", str1);

    return 0;
}
