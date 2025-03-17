#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // If the array has fewer than 2 elements, output -1
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int first_min = INT_MAX, second_min = INT_MAX;

    // Find the first and second smallest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < first_min) {
            second_min = first_min;
            first_min = arr[i];
        } else if (arr[i] < second_min && arr[i] != first_min) {
            second_min = arr[i];
        }
    }

    // If second_min is unchanged, no valid second smallest element exists
    if (second_min == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", second_min);
    }

    return 0;
}
