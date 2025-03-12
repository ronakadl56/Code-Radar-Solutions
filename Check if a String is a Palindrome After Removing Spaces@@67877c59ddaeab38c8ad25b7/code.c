#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isspace and tolower functions

void removeSpacesAndConvertToLower(char str[]) {
    int index = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(!isspace(str[i])) {
            str[index++] = tolower(str[i]);
        }
    }
    str[index] = '\0'; // Null-terminate the string
}

int isPalindrome(char str[]) {
    int len = strlen(str);

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }

    return 1; 
}

int main() {
    char str[1000];
    scanf(" %[^\n]", str); 

    removeSpacesAndConvertToLower(str);

    if(isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
