#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Variable to track the maximum element to the right
    int maxRight = -1;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];  // Store current element temporarily
        arr[i] = maxRight;     // Replace current with max on the right

        // Update maxRight if the current element is greater
        if (current > maxRight) {
            maxRight = current;
        }
    }

    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
