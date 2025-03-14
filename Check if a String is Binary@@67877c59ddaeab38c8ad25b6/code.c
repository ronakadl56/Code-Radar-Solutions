#include <stdio.h>
#include <string.h>

int isBinary(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isBinary(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
