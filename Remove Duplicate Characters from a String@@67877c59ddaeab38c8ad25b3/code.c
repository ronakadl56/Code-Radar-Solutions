#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int seen[256] = {0}; // Array to keep track of seen characters
    int index = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            str[index++] = str[i];
        }
    }
    str[index] = '\0'; // Null-terminate the string
}

int main() {
    char str[100];
    scanf("%[^\n]%*c", str); // Use " %[^\n]%*c" to read input including spaces

    removeDuplicates(str);

    printf("%s\n", str);

    return 0;
}
