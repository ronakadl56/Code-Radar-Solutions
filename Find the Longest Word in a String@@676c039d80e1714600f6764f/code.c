#include <stdio.h>
#include <string.h>

void findLongestWord(char str[], char longestWord[]) {
    int maxLength = 0;
    int length = 0;
    int i = 0;
    char word[50];
    char *wordPtr = word;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            *wordPtr++ = str[i];
            length++;
        } else {
            *wordPtr = '\0';
            if (length > maxLength) {
                maxLength = length;
                strcpy(longestWord, word);
            }
            length = 0;
            wordPtr = word;
        }
        i++;
    }
    
    // Check the last word
    *wordPtr = '\0';
    if (length > maxLength) {
        strcpy(longestWord, word);
    }
}

int main() {
    char str[100];
    char longestWord[50] = "";

    scanf("%[^\n]%*c", str);

    findLongestWord(str, longestWord);

    printf("%s\n", longestWord);

    return 0;
}
