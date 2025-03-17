#include <stdio.h>

int main() {
    int n, t;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &t);

    // Find the first occurrence of the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            printf("%d", i);
            return 0; // Exit after finding the first occurrence
        }
    }

    // If the target is not found
    printf("-1");
    return 0;
}