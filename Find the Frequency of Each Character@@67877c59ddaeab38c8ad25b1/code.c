#include <stdio.h>
#include <string.h>

void findFrequency(char *str) {
    int count[256] = {0};  // Array to store frequency of each character
    int len = strlen(str);

    // Count the frequency of each character
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Display the frequency of each character
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    
    scanf("%s", str);
    
    findFrequency(str);
    
    return 0;
}
