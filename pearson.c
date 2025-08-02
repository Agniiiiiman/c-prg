#include <stdio.h>
/* A Peterson number is a number equal to the sum of the factorials of its digits.

✅ Example:
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 → Peterson number */

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if(sum == original) {
        printf("%d is a Peterson Number.\n", original);
    } else {
        printf("%d is NOT a Peterson Number.\n", original);
    }

    return 0;
}
