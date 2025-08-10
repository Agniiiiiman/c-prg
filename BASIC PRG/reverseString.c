#include <stdio.h>
#include <string.h>

// Function to reverse the string
void reverseString(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        // Swap characters
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    // Input
    printf("Enter a string: ");
    scanf(" %s", str);  // Read string with spaces

    // Function call
    reverseString(str);

    // Output
    printf("Reversed string: %s\n", str);

    return 0;
}
