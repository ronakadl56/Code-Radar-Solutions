// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    scanf("%[^\n]", str);  // Reads a full line including spaces

    // Counting vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Checking if the character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    // Display the result
    printf("%d\n", count);

    return 0;
}
