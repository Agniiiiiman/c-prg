#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    // Input a string
    printf("Enter a lowercase string: ");
    scanf("%s", str);  // Note: only works for strings without spaces

    // Convert to uppercase
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    // Output the result
    printf("Uppercase string: %s\n", str);

    return 0;
}
