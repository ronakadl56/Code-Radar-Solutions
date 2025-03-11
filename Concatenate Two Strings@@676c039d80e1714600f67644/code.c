#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;

    scanf("%s", str1);  // Reads single word
    scanf("%s", str2);  // Reads single word

    // Finding the length of str1 (to start concatenation from the correct index)
    for (i = 0; str1[i] != '\0'; i++);

    // Concatenating str2 to str1
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }
    
    str1[i] = '\0';  // Null-terminate the concatenated string

    // Display the concatenated string
    printf("%s\n", str1);

    return 0;
}
