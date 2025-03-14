#include <stdio.h>
#include <string.h>

// Define the structure for Vehicle
struct Vehicle {
    char number[20];
    char type[10];
    float toll;
};

int main() {
    int n;
    scanf("%d", &n); // Input number of vehicles

    struct Vehicle vehicles[n];
    float carToll = 0.0, truckToll = 0.0, bikeToll = 0.0;

    // Input details for each vehicle
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);

        // Calculate toll based on vehicle type
        if (strcmp(vehicles[i].type, "Car") == 0) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") == 0) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") == 0) {
            bikeToll += vehicles[i].toll;
        }
    }

    // Output the total toll for each vehicle type
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carToll, truckToll, bikeToll);

    return 0;
}
