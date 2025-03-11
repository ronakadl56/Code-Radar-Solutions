#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    float threshold;
    int count = 0;
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    
    scanf("%f", &threshold);
    
    for (int i = 0; i < n; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }
    
    printf("Count of students scoring above %.2f: %d\n", threshold, count);
    
    return 0;
}