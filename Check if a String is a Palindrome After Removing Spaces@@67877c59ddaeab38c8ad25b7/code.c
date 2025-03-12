#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isspace and tolower functions

void removeSpacesAndConvertToLower(char str[], char cleanedStr[]) {
    int index = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(!isspace(str[i])) {
            cleanedStr[index++] = tolower(str[i]);
        }
    }
    cleanedStr[index] = '\0'; // Null-terminate the string
}

int isPalindrome(char str[]) {
    int len = strlen(str);

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // It's a palindrome
}

int main() {
    char str[1000];
    char cleanedStr[1000];
    scanf(" %[^\n]", str); // Use " %[^\n]" to read input including spaces

    removeSpacesAndConvertToLower(str, cleanedStr);

    if(strlen(cleanedStr) == 0 || isPalindrome(cleanedStr)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
