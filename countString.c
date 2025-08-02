#include <stdio.h>

// Function to count total words
int countWords(char str[]) {
    int i = 0, count = 0, insideWord = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (insideWord == 0) {
                count++;
                insideWord = 1;
            }
        } else {
            insideWord = 0;
        }
        i++;
    }

    return count;
}

int main() {
    char str[200];

    // Input
    printf("Enter a string: ");
    scanf(" %s", str); // reads full line with spaces

    // Function call
    int total = countWords(str);

    // Output
    printf("Total number of words = %d\n", total);

    return 0;
}
