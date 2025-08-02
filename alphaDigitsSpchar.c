#include <stdio.h>
#include <ctype.h>

void countAll(char str[], int *alpha, int *digit, int *special) {
    int i = 0;
    *alpha = *digit = *special = 0;
    
    while (str[i] != '\0') {
        if (isalpha(str[i]))
            (*alpha)++;
        else if (isdigit(str[i]))
            (*digit)++;
        else
            (*special)++;
        i++;
    } 
}

int main() {
    char str[999 ];
    int alphabets, digits, specialChars;

    printf("Enter a string: ");
    scanf(" %s", str);

    countAll(str, &alphabets, &digits, &specialChars);

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}
