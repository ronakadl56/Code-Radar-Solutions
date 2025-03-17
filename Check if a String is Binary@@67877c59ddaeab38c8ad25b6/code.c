#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str); 
    int isBinary = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }
    if (isBinary) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}