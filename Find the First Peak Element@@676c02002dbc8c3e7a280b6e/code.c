#include <stdio.h>

// Function to find the first peak element in the array
int findFirstPeak(int arr[], int n) {
    // If the array has only one element, it's the peak
    if (n == 1) {
        return arr[0];
    }

    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check for peaks in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    return -1; // No peak found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}