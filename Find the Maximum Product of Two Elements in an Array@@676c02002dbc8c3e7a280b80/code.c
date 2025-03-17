#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Handle edge case: If array size is less than 2
    if (n < 2) {
        printf("0\n");
        return 0;
    }

    // Find the two largest and two smallest elements
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Update max1 and max2
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        // Update min1 and min2 (for negative numbers)
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    // Maximum product can be either from two largest positives or two smallest negatives
    int maxProduct = (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;

    printf("%d\n", maxProduct);

    return 0;
}
