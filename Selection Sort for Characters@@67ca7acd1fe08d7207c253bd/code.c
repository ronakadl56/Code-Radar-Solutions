#include <stdio.h>

// Function to sort an array using Selection Sort
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the smallest element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the current element
        if (minIndex != i) {
            char temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Read the number of characters
    scanf("%d", &n);
    char arr[n];

    // Read the characters from input
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); // Space before %c to handle whitespace
    }

    // Call the selectionSort function
    selectionSort(arr, n);

    // Print the sorted array
    printArray(arr, n);

    return 0;
}
