#include <stdio.h>

int countLeadingZeros(int n) {
    if (n == 0) {
        return 32;
    }

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) == 0) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int num;

    scanf("%d", &num);

    int leadingZeros = countLeadingZeros(num);

    printf("%d\n", leadingZeros);

    return 0;
}