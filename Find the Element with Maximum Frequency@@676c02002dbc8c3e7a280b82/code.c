#include <stdio.h>
#define MAX 10001 // Assuming array values are within this range

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[MAX] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int max_count = 0;
    int result = -1;

    for (int i = 0; i < MAX; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            result = i;
        }
    }

    printf("%d", result);
    return 0;
}