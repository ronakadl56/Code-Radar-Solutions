#include <stdio.h>

int main() {
    int rows, num = 1;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        printf("\n");

        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}