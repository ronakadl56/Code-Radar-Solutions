// Your code here...
#include <stdio.h>

int main() {
    float cost_price, selling_price;
    
    // Taking input
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);
    
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);

    // Checking profit or loss
    if (selling_price > cost_price)
        printf("Profit\n");
    else if (selling_price < cost_price)
        printf("Loss%\n");
    else
        printf("No Profit No Loss\n");

    return 0;
}
