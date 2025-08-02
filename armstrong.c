#include <stdio.h>
#include <math.h>
/*An Armstrong number (also called a narcissistic number) is a number that is equal to the sum of the cubes of its digits (for 3-digit numbers).

For example:

153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 → Armstrong number*/
int main() {
    int num, original, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate the sum of nth powers of its digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check if it is Armstrong
    if (result == original) {
        printf("%d is an Armstrong Number.\n", original);
    } else {
        printf("%d is NOT an Armstrong Number.\n", original);
    }

    return 0;
}
