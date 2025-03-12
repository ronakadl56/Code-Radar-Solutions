#include <stdio.h>
#include <string.h>

void findShortestWord(char str[]) {
    int minLen = 1000;
    char shortestWord[100];
    char tempWord[100];
    int tempLen = 0;
    int j = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            tempWord[j++] = str[i];
            tempLen++;
        } else {
            tempWord[j] = '\0';
            if(tempLen < minLen) {
                minLen = tempLen;
                strcpy(shortestWord, tempWord);
            }
            tempLen = 0;
            j = 0;
        }
    }

    tempWord[j] = '\0';
    if(tempLen < minLen) {
        minLen = tempLen;
        strcpy(shortestWord, tempWord);
    }

    printf("%s\n", shortestWord);
}

int main() {
    char str[1000];
    scanf("%[^\n]%*c", str); 

    findShortestWord(str);

    return 0;
}
