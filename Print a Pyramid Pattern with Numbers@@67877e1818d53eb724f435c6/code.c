#include <stdio.h>
void printPyramid(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}