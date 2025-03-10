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
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printReverseTriangle(n);
    return 0;
}