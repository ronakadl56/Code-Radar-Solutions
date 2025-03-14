#include <stdio.h>
#include <string.h>

// Define the structure for MovieTicket
struct MovieTicket {
    char movieName[50];
    char ticketType[20];
    float price;
};

int main() {
    int n;
    scanf("%d", &n); // Input number of tickets

    struct MovieTicket tickets[n];
    float standardRevenue = 0.0, premiumRevenue = 0.0, vipRevenue = 0.0;

    // Input ticket details
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].price);

        // Calculate revenue based on ticket type
        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standardRevenue += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premiumRevenue += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vipRevenue += tickets[i].price;
        }
    }

    // Output the total revenue for each ticket type
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardRevenue, premiumRevenue, vipRevenue);

    return 0;
}
