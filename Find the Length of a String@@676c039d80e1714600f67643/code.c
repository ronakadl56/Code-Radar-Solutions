// Your code here...
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    scanf("%[^\n]", str);  // Reads full line including spaces

    // Counting characters until null terminator '\0' is reached
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Display the result
    printf("%d\n", length);

    return 0;
}
