#include <stdio.h>

int main() {
    int n; // number of elements
    scanf("%d", &n);
    
    int x, result = 0;
    
    // Assuming you want to calculate the minimum of the inputs
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (i == 0 || x < result) {
            result = x;  // Initialize or find the minimum
        }
    }
    
    printf("%d\n", result);
    return 0;
}