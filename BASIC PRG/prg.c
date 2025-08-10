#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j;
    bool isPrime;

    printf("Odd Prime Numbers from 1 to 100 are:\n");

    for(i = 3; i <= 100; i += 2) { // Start from 3, skip even numbers
        isPrime = true;

        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
