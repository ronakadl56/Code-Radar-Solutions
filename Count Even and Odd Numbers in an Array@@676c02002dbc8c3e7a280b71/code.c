#include <stdio.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Count even and odd numbers
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Output the counts of even and odd numbers
    printf("%d %d\n", even_count, odd_count);

    return 0;
}
