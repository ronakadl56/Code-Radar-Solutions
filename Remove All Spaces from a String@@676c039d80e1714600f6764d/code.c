#include <stdio.h>
#include <string.h>

// Function to remove all spaces from a string
void removeSpaces(char str[]) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[100];

    scanf("%[^\n]%*c", str);

    // Remove spaces from the string
    removeSpaces(str);

    // Print the modified string
    printf("%s\n", str);

    return 0;
}
