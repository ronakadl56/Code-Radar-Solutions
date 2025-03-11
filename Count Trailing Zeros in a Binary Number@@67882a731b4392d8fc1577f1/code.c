#include <stdio.h>
int countTrailingZeros(int n) {
    if (n == 0) {
        return 32; 
    }

    int count = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        count++;
    }

    return count;
}

int main() {
    int num;

    scanf("%d", &num);

    int trailingZeros = countTrailingZeros(num);

    printf("%d\n", trailingZeros);

    return 0;
}