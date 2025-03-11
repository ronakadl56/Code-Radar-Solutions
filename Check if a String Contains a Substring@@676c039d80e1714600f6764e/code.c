#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100];
    char subStr[50];

    scanf("%[^\n]%*c", mainStr);

    scanf("%[^\n]%*c", subStr);
    
    if (strstr(mainStr, subStr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
