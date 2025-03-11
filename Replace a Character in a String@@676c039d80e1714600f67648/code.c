#include <stdio.h>

void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100];
    char oldChar, newChar;

    scanf("%[^\n]%*c", str);

    scanf(" %c", &oldChar);

    scanf(" %c", &newChar);

    replaceChar(str, oldChar, newChar);

    printf("%s\n", str);

    return 0;
}
