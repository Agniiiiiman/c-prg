#include <stdio.h>
#include <stdbool.h>  // Use this for bool, true, false

// Function to check prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to check palindrome
bool isPalindrome(int num) {
    int org = num, rev = 0, rem;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    return org == rev;
}

int main() {
    int num;

    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    if (isPrime(num) && isPalindrome(num)) {
        printf("%d is a prime palindrome number.\n", num);
    } else {
        printf("%d is NOT a prime palindrome number.\n", num);
    }

    return 0;
}
