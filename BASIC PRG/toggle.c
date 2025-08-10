#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    
    printf("Enter a string: ");
    scanf(" %s", str);  
    
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }

    
    printf("Toggled case string: %s\n", str);

    return 0;
}
