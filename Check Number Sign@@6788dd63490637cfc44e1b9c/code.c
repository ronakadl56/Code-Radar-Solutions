// Your code here...
#include <stdio.h>

int main() {
    float num;

    scanf("%f", &num);

    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}
