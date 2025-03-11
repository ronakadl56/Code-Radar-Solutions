// Your code here...
#include <stdio.h>

int main() {
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);

    // Check if it's a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check the type of triangle
        if (a == b && b == c)
            printf("Equilateral\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles\n");
        else
            printf("Scalene\n");
    } 
    return 0;
}
