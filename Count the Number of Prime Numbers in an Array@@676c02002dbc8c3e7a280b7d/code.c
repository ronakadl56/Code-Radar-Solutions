#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime
    if (num == 2) return 1; // 2 is a prime number
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int n, count = 0;
    scanf("%d", &n); // Input the size of the array
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each element if it's a prime number
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++; // Increment the count if prime
        }
    }

    // Output the total prime numbers
    printf("%d\n", count);
    return 0;
}
