// Your code here...
#include <stdio.h>
int setNthBit(int num, int n) {
    return num | (1 << n);
}
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int updatedNum = setNthBit(num, n);
    printf("%d\n", updatedNum);
    return 0;
}