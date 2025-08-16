//A number is said to be an Ugly number if positive numbers whose prime factors only include 2, 3, 5.
#include <stdio.h>

int isUgly(int num) {
    if (num <= 0) return 0; 

    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;

    return (num == 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isUgly(n))
        printf("%d is an Ugly number.\n", n);
    else
        printf("%d is NOT an Ugly number.\n", n);

    return 0;
}
