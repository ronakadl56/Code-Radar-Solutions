#include <stdio.h>

// Define the structure for Student
struct Student {
    int roll_number;
    char name[100];
    float marks;
};

// Function to determine the grade based on marks
char getGrade(float marks) {
    if (marks >= 85) {
        return 'A';
    } else if (marks >= 70 && marks < 85) {  // Corrected the condition here
        return 'B';
    } else {
        return 'C';
    }
}

int main() {
    int n;
    // Input the number of students
    scanf("%d", &n);
    
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Display student details along with their grade
    for (int i = 0; i < n; i++) {
        char grade = getGrade(students[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll_number, students[i].name, grade);
    }

    return 0;
}
