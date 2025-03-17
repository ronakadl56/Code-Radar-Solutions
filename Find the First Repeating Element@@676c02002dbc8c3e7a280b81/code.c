#include <stdio.h>
#include <limits.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // To store the first occurrence index of each element
    int index[MAX];
    for (int i = 0; i < MAX; i++) {
        index[i] = -1; // Initialize all positions as -1 (not found)
    }

    int minIndex = INT_MAX; // Store the minimum index of a repeating element

    for (int i = 0; i < n; i++) {
        if (index[arr[i]] == -1) {
            // First occurrence of arr[i]
            index[arr[i]] = i;
        } else {
            // If already present, update minIndex
            if (index[arr[i]] < minIndex) {
                minIndex = index[arr[i]];
            }
        }
    }

    if (minIndex == INT_MAX) {
        printf("-1\n"); // No repeating element found
    } else {
        printf("%d\n", arr[minIndex]);
    }

    return 0;
}
