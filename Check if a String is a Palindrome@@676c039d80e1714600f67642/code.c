// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    scanf("%s", str);  // Reads a single word (no spaces)

    len = strlen(str);  // Get the length of the string

    // Checking palindrome condition
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;  // If mismatch found, it's not a palindrome
            break;
        }
    }

    // Display result
    if (isPalindrome)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
