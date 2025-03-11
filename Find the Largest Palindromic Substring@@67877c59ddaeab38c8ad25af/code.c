#include <stdio.h>
#include <string.h>

// Function to expand around the center and find the palindrome
void expandAroundCenter(char *str, int left, int right, int *start, int *maxLength) {
    while (left >= 0 && right < strlen(str) && str[left] == str[right]) {
        left--;
        right++;
    }

    int length = right - left - 1;
    if (length > *maxLength) {
        *start = left + 1;
        *maxLength = length;
    }
}

char* largestPalindromicSubstring(char *str) {
    int start = 0, maxLength = 1;  // Initialize variables to store the starting index and max length

    for (int i = 0; i < strlen(str); i++) {
        // Find the longest odd length palindrome with center i
        expandAroundCenter(str, i, i, &start, &maxLength);
        // Find the longest even length palindrome with center i and i+1
        expandAroundCenter(str, i, i + 1, &start, &maxLength);
    }

    // Allocate memory to store the result substring
    char *result = (char*)malloc((maxLength + 1) * sizeof(char));
    strncpy(result, str + start, maxLength);
    result[maxLength] = '\0';

    return result;
}

int main() {
    char str[100];

    scanf("%s", str);

    char *result = largestPalindromicSubstring(str);

    printf("%s\n", result);

    free(result);  // Free the allocated memory
    return 0;
}
