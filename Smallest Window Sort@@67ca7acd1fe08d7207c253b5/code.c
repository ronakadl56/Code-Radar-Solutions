#include <stdio.h>

int findMinLengthSubarray(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < n - 1 && arr[start] <= arr[start + 1]) {
        start++;
    }

    if (start == n - 1) {
        return 0;
    }

    while (end > 0 && arr[end] >= arr[end - 1]) {
        end--;
    }

    int minSubarrayLen = end - start + 1;

    int minVal = arr[start], maxVal = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    while (start > 0 && arr[start - 1] > minVal) {
        start--;
    }
    while (end < n - 1 && arr[end + 1] < maxVal) {
        end++;
    }

    return end - start + 1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int result = findMinLengthSubarray(arr, N);
        printf("%d\n", result);
    }

    return 0;
}
