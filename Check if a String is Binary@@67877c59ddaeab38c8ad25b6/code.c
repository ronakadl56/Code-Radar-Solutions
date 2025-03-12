#include <stdio.h>
#include <string.h>

int isBinaryString(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'e' && str[i] != '1') {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[1000];
    scanf("%[^\n]%*c", str); 

    if(isBinaryString(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
