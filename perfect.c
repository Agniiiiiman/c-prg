#include <stdio.h>
/* A perfect number is a positive integer that is equal to the sum of its proper positive divisors, excluding itself.
Example: 28 → 1 + 2 + 4 + 7 + 14 = 28*/
int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num && num != 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}
