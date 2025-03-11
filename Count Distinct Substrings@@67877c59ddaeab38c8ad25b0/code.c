#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to count distinct substrings
int countDistinctSubstrings(char *str) {
    int len = strlen(str);
    int count = 0;
    char **suffixArray = (char **)malloc(len * sizeof(char *));
    
    // Create suffix array
    for (int i = 0; i < len; i++) {
        suffixArray[i] = str + i;
    }
    
    // Sort suffix array
    qsort(suffixArray, len, sizeof(char *), compare);
    
    // Count distinct substrings
    for (int i = 0; i < len; i++) {
        if (i == 0) {
            count += strlen(suffixArray[i]);
        } else {
            int j = 0;
            while (suffixArray[i][j] == suffixArray[i - 1][j]) {
                j++;
            }
            count += strlen(suffixArray[i]) - j;
        }
    }
    
    free(suffixArray);
    return count; // Remove the additional 1
}

int main() {
    char str[100];
    
    scanf("%s", str);
    
    int result = countDistinctSubstrings(str);
    
    printf("%d\n", result);
    
    return 0;
}
