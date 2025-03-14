#include <stdio.h>
#include <string.h>

// Function to check if a string is binary
int isBinary(char str[]) {
    // If the input is empty, consider it as binary
    if (strlen(str) == 0) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Not binary
        }
    }
    return 1; // Is binary
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Check for binary and output result
    if (isBinary(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
