#include <stdio.h>

// Define stringLength OUTSIDE main
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    int len;

    printf("ENTER A STRING: ");
    fgets(str, sizeof(str), stdin);

    len = stringLength(str);
    printf("Length: %d\n", len);

    return 0;
}
