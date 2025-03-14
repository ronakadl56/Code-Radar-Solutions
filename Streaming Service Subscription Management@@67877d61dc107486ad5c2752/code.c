#include <stdio.h>
#include <string.h>

// Define the structure for Subscription
struct Subscription {
    char userName[50];
    char subscriptionType[20];
    float cost;
};

int main() {
    int n;
    scanf("%d", &n); // Input number of subscriptions

    struct Subscription subs[n];
    
    // Variables to store revenue and user counts
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0.0, standardRevenue = 0.0, premiumRevenue = 0.0;

    // Input subscription details
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].userName, subs[i].subscriptionType, &subs[i].cost);

        // Calculate revenue and count based on subscription type
        if (strcmp(subs[i].subscriptionType, "Basic") == 0) {
            basicCount++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].subscriptionType, "Standard") == 0) {
            standardCount++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].subscriptionType, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += subs[i].cost;
        }
    }

    // Output the total revenue and user count for each subscription type
    printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);

    return 0;
}
