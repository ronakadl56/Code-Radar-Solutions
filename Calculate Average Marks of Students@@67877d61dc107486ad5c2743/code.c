#include <stdio.h>

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

int main() {
    int N;
    float totalMarks = 0.0;

    scanf("%d", &N);

    Student students[N];

    for (int i = 0; i < N; i++) {
        printf("%d", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        totalMarks += students[i].marks;
    }


    float averageMarks = totalMarks / N;


    printf("%.2f\n", averageMarks);

    return 0;
}
