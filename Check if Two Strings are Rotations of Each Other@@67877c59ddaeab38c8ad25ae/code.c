#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0;
    }

    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        return 1;
    }

    return 0;
}

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);

    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
