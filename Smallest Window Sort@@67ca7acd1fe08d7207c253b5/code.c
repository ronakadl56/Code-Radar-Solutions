int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the first element which is out of order from the left
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    // If the entire array is already sorted
    if (left == n - 1) {
        return 0;
    }

    // Find the first element which is out of order from the right
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find the min and max within the unsorted subarray
    int minVal = arr[left], maxVal = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Expand left boundary if needed
    while (left > 0 && arr[left - 1] > minVal) {
        left--;
    }

    // Expand right boundary if needed
    while (right < n - 1 && arr[right + 1] < maxVal) {
        right++;
    }

    return right - left + 1;
}
