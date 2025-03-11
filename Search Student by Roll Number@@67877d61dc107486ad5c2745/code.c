#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, searchRollNumber;
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    
    scanf("%d", &searchRollNumber);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == searchRollNumber) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student not found\n");
    }
    
    return 0;
}