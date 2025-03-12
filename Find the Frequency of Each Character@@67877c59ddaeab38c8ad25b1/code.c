#include <stdio.h>
#include <string.h>

void findFrequency(char str[]) {
    int freq[256] = {0}; // Array to store frequency of each character
    int printed[256] = {0}; // Array to keep track of printed characters

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(!printed[(unsigned char)str[i]]) {
            printf("%c: %d\n", str[i], freq[(unsigned char)str[i]]);
            printed[(unsigned char)str[i]] = 1;
        }
    }
}

int main() {
    char str[100];
    scanf(" %[^\n]", str); 

    findFrequency(str);

    return 0;
}
