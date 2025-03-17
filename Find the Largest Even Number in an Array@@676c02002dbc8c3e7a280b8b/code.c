#include <stdio.h>

int main() {
    int N, i;
    int largestEven = -1; // Initialize to -1 to indicate no even number found

    // Read the size of the array
    scanf("%d", &N);
    int arr[N]; // Declaration of the array

    // Read the array elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to find the largest even number
    for(i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) { // Check if the number is even
            if(arr[i] > largestEven) {
                largestEven = arr[i]; // Update largestEven if current is larger
            }
        }
    }

    // Output the result
    printf("%d\n", largestEven);

    return 0;
}