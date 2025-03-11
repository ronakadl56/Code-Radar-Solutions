// Your code here...
#include <stdio.h>

// Function to perform bitwise NOT operation and return the flipped number
int flipBits(int n) {
    return ~n;
}

int main() {
    int num;

    // Get the number from the user
    scanf("%d", &num);

    // Perform bitwise NOT operation
    int flippedNum = flipBits(num);

    // Print the result
    printf("%d\n", flippedNum);

    return 0;
}