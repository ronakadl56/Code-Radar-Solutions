#include <stdio.h>
#include <string.h>

char findFirstUnique(char str[]) {
    int freq[256] = {0}; // Array to store frequency of each character

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '-';
}

int main() {
    char str[100];
    scanf("%[^\n]%*c", str); 

    char result = findFirstUnique(str);

    if (result == '-') {
        printf("-\n");
    } else {
        printf("%c\n", result);
    }

    return 0;
}
