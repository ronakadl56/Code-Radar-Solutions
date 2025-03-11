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
    char str1[100], str2[100];

    scanf("%[^\n]%*c", str1);  // Read a line of text until newline is encountered


    scanf("%[^\n]%*c", str2);  // Read a line of text until newline is encountered


    concatenate(str1, str2);

    // Print the concatenated string
    printf("%s\n", str1);

    return 0;
}
