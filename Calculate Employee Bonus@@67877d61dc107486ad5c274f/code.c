#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n); // Input number of employees

    struct Employee emp[n];
    float bonus;

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    // Calculate and display the bonus for each employee
    for (int i = 0; i < n; i++) {
        // Calculate bonus: 10% if salary < 50000, else 5%
        if (emp[i].salary < 50000) {
            bonus = emp[i].salary * 0.10;
        } else {
            bonus = emp[i].salary * 0.05;
        }

        // Output the employee details with the bonus
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", emp[i].id, emp[i].name, bonus);
    }

    return 0;
}
