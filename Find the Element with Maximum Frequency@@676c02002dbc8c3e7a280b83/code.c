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

    // Frequency array to count occurrences of elements
    int freq[MAX] = {0};

    // Store frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the element with the maximum frequency and the smallest value
    int maxFreq = 0;
    int result = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            result = arr[i];
        } else if (freq[arr[i]] == maxFreq && arr[i] < result) {
            result = arr[i];
        }
    }

    printf("%d\n", result);
    return 0;
}
