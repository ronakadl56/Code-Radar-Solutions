#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_LEN 100

// Function to perform bubble sort on an array of strings
void bubbleSort(char arr[][MAX_LEN], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent strings
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the strings
                char temp[MAX_LEN];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char arr[MAX][MAX_LEN];

    // Input the number of strings
    scanf("%d", &n);

    // Input the strings
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Sort the array of strings
    bubbleSort(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
