#include <stdio.h>
/*A palindrome number is a number that remains the same when its digits are reversed.
Example: 121, 1331, 12321*/
int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if(original == reversed) {
        printf("%d is a Palindrome Number.\n", original);
    } else {
        printf("%d is NOT a Palindrome Number.\n", original);
    }

    return 0;
}
