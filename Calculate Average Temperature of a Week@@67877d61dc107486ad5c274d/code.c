#include <stdio.h>

// Define the structure for Day
struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day week[7];
    float totalTemperature = 0.0;

    // Input data for 7 days
    for (int i = 0; i < 7; i++) {
        scanf("%s %f", week[i].name, &week[i].temperature);
        totalTemperature += week[i].temperature; // Sum up the temperatures
    }

    // Calculate the average temperature
    float averageTemperature = totalTemperature / 7.0;

    // Output the average temperature rounded to 2 decimal places
    printf("Average Temperature: %.2f\n", averageTemperature);

    return 0;
}
