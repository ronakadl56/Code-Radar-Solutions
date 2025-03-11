#include <stdio.h>

int main() {
    int num, quotient;

    scanf("%d", &num);

    quotient = num / 2;

    if (quotient * 2 == num)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
