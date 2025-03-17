#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the size of the array

    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]); // Read the array elements
    }

    int largestEven = -1; // Initialize with -1 to indicate no even number found yet

    for (int i = 0; i < N; i++) {
        if (array[i] % 2 == 0) { // Check if the number is even
            if (array[i] > largestEven) {
                largestEven = array[i]; // Update the largest even number
            }
        }
    }

    printf("%d\n", largestEven); // Output the largest even number or -1

    return 0;
}