#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;

    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        
        scanf("%d", &students[i].rollNumber);
        
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}