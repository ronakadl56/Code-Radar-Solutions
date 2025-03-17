#include <stdio.h>

// Function to calculate sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;  // Extract last digit and add to sum
        num /= 10;        // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    
    // Input the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate and output the sum of digits for each element
    for (int i = 0; i < n; i++) {
        printf("%d ", sum_of_digits(arr[i]));
    }
    
    return 0;
}
