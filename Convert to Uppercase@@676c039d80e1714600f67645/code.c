#include <stdio.h>

void convertToUppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    convertToUppercase(str);
    
    printf("Uppercase string: %s\n", str);
    
    return 0;
}
