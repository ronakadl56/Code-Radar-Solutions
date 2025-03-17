#include <stdio.h>

// Function to find the smallest missing positive integer
int findMissingPositive(int arr[], int n) {
    // Step 1: Move all positive numbers to their correct position if possible
    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            // Swap arr[i] with the element at its correct position
            int temp = arr[arr[i] - 1];
            arr[arr[i] - 1] = arr[i];
            arr[i] = temp;
        }
    }

    // Step 2: Find the first missing positive number
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    // If all positions are filled correctly, return n + 1
    return n + 1;
}

int main() {
    int n;

    // Input size of the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output the smallest missing positive integer
    printf("%d\n", findMissingPositive(arr, n));

    return 0;
}