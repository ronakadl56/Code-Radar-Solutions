#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n], leaders[n], count = 0, max = -1;

    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    for (i = n - 1; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];
            leaders[count++] = max;
        }
    }

    for (i = count - 1; i >= 0; i--) 
        printf("%d ", leaders[i]);

    return 0;
}