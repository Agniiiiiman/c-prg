#include <stdio.h>

int main() {
    long num, fact = 1;
    printf("ENTER A NUMBER FOR FACTORIAL: ");
    scanf("%ld", &num);

    for (int i = num; i >= 1; i--) {
        fact = fact * i;
    }

    printf("THE FACTORIAL OF THE NUMBER IS %ld\n", fact);
    return 0;
}
