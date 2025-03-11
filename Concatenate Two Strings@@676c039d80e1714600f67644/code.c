#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;

    scanf(" %[^\n]", str1);  
   
    scanf(" %[^\n]", str2);  

   
    for (i = 0; str1[i] != '\0'; i++);


    if (str2[0] == ' ') {
        j = 1;  
    } else {
        j = 0;
    }

    str1[i] = '';
    i++;

    for (; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    printf("%s\n", str1);

    return 0;
}
