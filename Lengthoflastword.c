#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int i = strlen(s) - 1;
    int length = 0;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count last word length
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

// Example usage
int main() {
    char s[] = "   fly me   to   the moon  ";
    printf("Length of last word: %d\n", lengthOfLastWord(s));
    return 0;
}
