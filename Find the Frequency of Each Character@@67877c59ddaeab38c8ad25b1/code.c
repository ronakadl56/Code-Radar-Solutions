#include <stdio.h>
#include <string.h>

void findFrequency(char str[]) {
    int freq[256] = {0}; // Array to store frequency of each character

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("%c:%d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str); 

    findFrequency(str);

    return 0;
}
