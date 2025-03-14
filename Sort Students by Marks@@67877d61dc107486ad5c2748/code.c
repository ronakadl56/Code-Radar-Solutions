#include <stdio.h>
#include <string.h>

// Define the structure 'Student'
struct Student {
    int roll_number;
    char name[100];
    float marks;
};

// Function to sort students by marks in descending order
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    // Input number of students
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Sort students by marks in descending order
    sortStudents(students, n);

    // Output student details
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }

    return 0;
}
