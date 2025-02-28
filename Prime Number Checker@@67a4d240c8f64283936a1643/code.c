#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n, i;
    scanf("%d", &n); 
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num); 
        
        if (is_prime(num)) {
            printf("1\n"); 
        } else {
            printf("0\n"); 
        }
    }
    
    return 0;
}
