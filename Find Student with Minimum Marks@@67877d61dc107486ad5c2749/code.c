#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    struct Student minStudent;

    for (int i = 0; i < n; i++) {
        // printf(" %d: ", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        
        if (i == 0 || students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }

    printf("Student with Minimum Marks:");
    printf(" Roll Number: %d", minStudent.rollNumber);
    printf(", Name: %s", minStudent.name);
    printf(", Marks: %.2f", minStudent.marks);

    return 0;
}