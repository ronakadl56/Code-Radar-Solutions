#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char str1[], char str2[]) {
    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(int)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(int)str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    scanf("%[^\n]%*c", str1);  

    scanf("%[^\n]%*c", str2); 

    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
