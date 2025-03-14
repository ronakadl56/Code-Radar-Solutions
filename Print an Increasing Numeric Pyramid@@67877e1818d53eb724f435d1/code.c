#include <stdio.h>

int main() {
    int N, num = 1, i, j, space;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
