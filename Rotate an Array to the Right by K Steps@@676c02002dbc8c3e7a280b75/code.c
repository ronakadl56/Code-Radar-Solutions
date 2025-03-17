#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n

    int rotated[n];

    // Shift elements to the right
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
}

int main() {
    int n, k;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    scanf("%d", &k);

    // Rotate and output
    rotateRight(arr, n, k);

    return 0;
}