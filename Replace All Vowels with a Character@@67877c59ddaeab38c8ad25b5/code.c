#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower function

void replaceVowels(char str[], char replacement) {
    char vowels[] = "aeiouAEIOU"; // List of vowels

    for(int i = 0; str[i] != '\0'; i++) {
        if(strchr(vowels, str[i]) != NULL) {
            str[i] = replacement;
        }
    }
}

int main() {
    char str[100];
    char replacement;
    scanf("%[^\n]%*c", str); 
    scanf("%c", &replacement);

    replaceVowels(str, replacement);

    printf("%s\n", str);

    return 0;
}
