#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];  // Declare two character arrays
    int i, len;

    scanf("%s", str);  // Reads a single word (no spaces)

    len = strlen(str);  // Get the length of the string

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];  // Copy characters in reverse order
    }
    rev[len] = '\0';  // Add null terminator to end the string

    // Display the reversed string
    printf("%s\n", rev);

    return 0;
}
