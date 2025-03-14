#include <stdio.h>

// Define the Student structure
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Check if all students passed
    int allPassed = 1; // Assume all passed initially
    for (int i = 0; i < n; i++) {
        if (students[i].marks <= 50) {
            allPassed = 0; // Found a student who did not pass
            break;
        }
    }

    // Output the result
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}