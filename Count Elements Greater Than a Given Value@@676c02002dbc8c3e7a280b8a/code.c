#include <stdio.h>

int main() {
    int N, K;
    
    // Read the values of N and K
    scanf("%d %d", &N, &K);

    int array[N];
    int count = 0;

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    
    // Count elements greater than K
    for (int i = 0; i < N; i++) {
        if (array[i] > K) {
            count++;
        }
    }
    
    // Output the count
    printf("%d\n", count);
    
    return 0;
}