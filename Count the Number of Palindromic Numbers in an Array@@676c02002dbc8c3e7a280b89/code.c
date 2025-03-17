#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    int array[N];
    int count = 0;

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Count palindromic numbers
    for (int i = 0; i < N; i++) {
        if (isPalindrome(array[i])) {
            count++;
        }
    }
    
    // Output the count
    printf("%d\n", count);
    
    return 0;
}