#include <stdio.h>
#include <string.h>

char firstNonRepeatedChar(char *str) {
    int count[256] = {0};  // Array to store count of characters
    int i;

    // Count the occurrences of each character
    for (i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the first non-repeated character
    for (i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';
}

int main() {
    char str[100];

    scanf("%s", str);
    
    char result = firstNonRepeatedChar(str);
    
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-\n");
    }
    
    return 0;
}
