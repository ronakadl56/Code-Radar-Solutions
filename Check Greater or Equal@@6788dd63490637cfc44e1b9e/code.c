// Your code here...
#include <stdio.h>

int main() {
    float num1, num2;

    scanf("%f %f", &num1, &num2);

    if (num1 > num2)
        printf("Yes\n");
    else if (num1 == num2)
        printf("No\n");
    return 0;
}
