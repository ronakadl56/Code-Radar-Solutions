#include <stdio.h>

int isMonotonic(int arr[], int n) {
    int increasing = 1;
    int decreasing = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            increasing = 0;  // Not increasing
        } else if (arr[i] > arr[i - 1]) {
            decreasing = 0;  // Not decreasing
        }
    }
    
    return increasing || decreasing; // Return true if either is true
}

int main() {
    int n;
    scanf("%d", &n);  // Read array size
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    if (isMonotonic(arr, n)) {
        printf("YES\n");  // Output if monotonic
    } else {
        printf("NO\n");   // Output if not monotonic
    }

    return 0;
}