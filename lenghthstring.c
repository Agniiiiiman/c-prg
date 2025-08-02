#include <stdio.h>

// Function to calculate length of string
int stringLength(char str[]) {
    int length = 0;

    // Loop until we hit the null character '\0'
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];
    int len;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    // Call function
    len = stringLength(str);

    // Output length
    printf("Length of the string = %d\n", len);

    return 0;
}
