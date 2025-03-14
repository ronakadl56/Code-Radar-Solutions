#include <stdio.h>

// Function to generate Fibonacci series
void fibonacciSeries(int n) {
    int a = 0, b = 1;

    // Handle the first term
    if (n >= 1) {
        printf("%d ", a);
    }

    // Handle the second term
    if (n >= 2) {
        printf("%d ", b);
    }

    // Generate remaining terms
    for (int i = 3; i <= n; i++) {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciSeries function
    fibonacciSeries(n);

    return 0;
}
