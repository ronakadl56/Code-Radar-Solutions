#include <stdio.h>

// Function to count the number of occurrences of a character in a string
int countCharOccurrences(char str[], char charToCount) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToCount) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char charToCount;

    scanf("%[^\n]%*c", str);

    scanf(" %c", &charToCount);

  
    int occurrences = countCharOccurrences(str, charToCount);


    printf("%d\n",occurrences);

    return 0;
}
