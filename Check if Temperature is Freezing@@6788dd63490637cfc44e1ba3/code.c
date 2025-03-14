#include <stdio.h>

int main() {
    int temperature;

    scanf("%d", &temperature);

    if (temperature <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }

    return 0;
}
