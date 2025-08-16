//A number is called a sunny number if the number next to the given number is a perfect numbere.
// In other words, a number N will be a sunny number if N+1 is a perfect square.
#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}


int isSunny(int num) {
    return isPerfectSquare(num + 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isSunny(n))
        printf("%d is a Sunny number.\n", n);
    else
        printf("%d is NOT a Sunny number.\n", n);

    return 0;
}
