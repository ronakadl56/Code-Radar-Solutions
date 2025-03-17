#include <stdio.h>

int main() {
    int n;
    
    // Input the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index = 0; // To track the position of non-zero elements
    
    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    
    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index++] = 0;
    }
    
    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
