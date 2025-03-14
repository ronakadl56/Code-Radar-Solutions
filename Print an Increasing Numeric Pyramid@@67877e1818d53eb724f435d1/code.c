#include <stdio.h>

int main() {
    int rows;

    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
