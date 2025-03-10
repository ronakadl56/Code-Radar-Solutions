#include <stdio.h>

void printReverseTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        char letter = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printReverseTriangle(n);
    return 0;
}