#include <stdio.h>
int getLowestSetBitPosition(int n) {
    if (n == 0) {
        return -1; 
    }

    int position = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        position++;
    }

    return position;
}

int main() {
    int num;

    scanf("%d", &num);

    int position = getLowestSetBitPosition(num);

    printf("%d\n", position);

    return 0;
}