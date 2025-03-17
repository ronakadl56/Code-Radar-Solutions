#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers <= 1 are not prime
    if (num == 2) return 1; // 2 is the only even prime number
    if (num % 2 == 0) return 0; // Exclude other even numbers
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0; // If divisible, not a prime number
        }
    }
    return 1; // If no divisors, it's prime
}

int main() {
    int n;

    // Input the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1; // Error handling for invalid input
    }

    int arr[n];
    int count = 0;

    // Input array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1; // Error handling for invalid input
        }
    }

    // Check for prime numbers in the array
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Output the count of prime numbers
    printf("%d\n", count);

    return 0;
}
