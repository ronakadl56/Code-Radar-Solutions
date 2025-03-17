#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }

    int running_sum = 0;
    for (int i = 0; i < n; i++) {
        running_sum += arr[i];  // Keep adding to the running sum
        printf("%d ", running_sum);  // Print the running sum
    }

    return 0;
}
