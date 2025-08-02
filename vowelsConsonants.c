#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void countVowelsConsonants(char str[], int *vowels, int *consonants) {
    int i = 0;
    *vowels = *consonants = 0;

    while (str[i] != '\0') {
        char ch = tolower(str[i]); // Make character lowercase for easy checking
        if (isalpha(ch)) { // Check if it's an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        i++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Input
    printf("Enter a string: ");
    scanf(" %s", str);

    // Function call
    countVowelsConsonants(str, &vowels, &consonants);

    // Output
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
