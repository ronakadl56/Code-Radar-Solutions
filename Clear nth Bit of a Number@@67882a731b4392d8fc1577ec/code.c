// Your code here...
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);
    int mask = ~(1 << b);
    c = a & mask;
    printf("%d", c);
    return 0;
}