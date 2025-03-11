// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, wordCount = 0;
    
    fgets(str, sizeof(str), stdin);

    // Counting words
    for (i = 0; str[i] != '\0'; i++) {
        // If a space is found and the next character is not a space or null, increase count
        if ((str[i] == ' ' || str[i] == '\n') && (i > 0 && str[i - 1] != ' ')) {
            wordCount++;
        }
    }

    // If the first character is not a space, there's at least one word
    if (str[0] != '\0' && str[0] != ' ')
        wordCount++;

    // Display the result
    printf("%d\n", wordCount);

    return 0;
}
