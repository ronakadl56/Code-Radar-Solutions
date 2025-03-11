#include <stdio.h>
#include <string.h>

// Function to find the most frequent character
char findMostFrequentChar(char str[]) {
    int freq[256] = {0};
    int maxFreq = 0;
    char mostFrequentChar = 'a';

    // Calculate the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
            if (freq[(int)str[i]] > maxFreq) {
                maxFreq = freq[(int)str[i]];
                mostFrequentChar = str[i];
            } else if (freq[(int)str[i]] == maxFreq && str[i] < mostFrequentChar) {
                mostFrequentChar = str[i];
            }
        }
    }

    return mostFrequentChar;
}

int main() {
    char str[100];

    scanf("%[^\n]%*c", str);  // Read a line of text until newline is encountered

    char result = findMostFrequentChar(str);
    printf("%c\n", result);

    return 0;
}
