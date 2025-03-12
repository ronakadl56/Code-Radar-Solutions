#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isalpha function

int isVowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeConsonants(char str[]) {
    int index = 0;
    char result[1000];

    for(int i = 0; str[i] != '\0'; i++) {
        if(!isalpha(str[i]) || isVowel(str[i])) {
            result[index++] = str[i];
        }
    }
    result[index] = '\0'; 

    strcpy(str, result); 
}

int main() {
    char str[1000];
    scanf("%[^\n]%*c", str);

    removeConsonants(str);

    printf("%s\n", str);

    return 0;
}
