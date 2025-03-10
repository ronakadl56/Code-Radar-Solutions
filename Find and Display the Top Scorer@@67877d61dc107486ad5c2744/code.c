// Your code here...
#include <stdio.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    struct Student topStudent;

    scanf("%d", &n);

    // Create an array of Student structures to hold the data
    struct Student students[n];

    // Read information for each student
    for (int i = 0; i < n; i++) {;
        
        scanf("%d", &students[i].rollNumber);
        
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);

        if (i == 0 || students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    // Print the information of the top student
    printf("Top Scorer:");
    printf(" Roll Number: %d", topStudent.rollNumber);
    printf(", Name: %s", topStudent.name);
    printf(", Marks: %.2f", topStudent.marks);

    return 0;
}