#include <stdio.h>
#include <string.h>

// Function to sort an array of strings using Bubble Sort
void bubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent strings and swap if they are in the wrong order
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Function to print an array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

// Main function where program execution starts
int main() {
    int n; // Variable to store the number of strings

    // Read the number of strings from user input
    scanf("%d", &n);

    char arr[n][100]; // Declare an array of strings with max length 100

    // Read the strings from user input
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Call the bubbleSort function
    bubbleSort(arr, n);

    // Display the sorted array of strings
    printArray(arr, n);

    return 0; // Indicate successful program termination
}