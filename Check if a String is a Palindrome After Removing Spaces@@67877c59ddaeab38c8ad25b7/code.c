#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char str[]) {
    char cleanedStr[1000];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleanedStr[j++] = tolower(str[i]);
        }
    }
    cleanedStr[j] = '\0';

    int left = 0;
    int right = strlen(cleanedStr) - 1;
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return 0; 
        }
        left++;
        right--;
    }

    return 1; 
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}