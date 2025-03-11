#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    scanf("%[^\n]%*c", str);

    int length = strlen(str);
    char* wordStart = NULL;
    char* temp = str; 

    while (*temp) {
        if ((wordStart == NULL) && (*temp != ' ')) {
            wordStart = temp;
        }

        if (wordStart && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverseWord(wordStart, temp);
            wordStart = NULL;
        }

        temp++;
    }

    printf("%s\n", str);

    return 0;
}
