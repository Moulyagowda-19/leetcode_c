#include <stdio.h>

char firstMatchingChar(char* s) {
    int left = 0;
    int right = 0;

    // find length
    while (s[right] != '\0') {
        right++;
    }
    right--; // last index

    while (left < right) {
        if (s[left] == s[right]) {
            return s[left];
        }
        left++;
        right--;
    }

    return '\0'; // no match
}

int main() {
    char s[] = "abca";
    char result = firstMatchingChar(s);

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("No match\n");

    return 0;
}
