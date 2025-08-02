#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Input strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is not equal  the second string.\n");
    } else {
        printf("The first string is not eqal to  the second string.\n");
    }

    return 0;
}
