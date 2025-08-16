//number is said to be a pronic number if product of two consecutive integers is equal to the number, 
// is called a pronic number. Example- 42 is said to be a pronic number, 42=6×7, here 6 and 7 are consecutive integers
#include <stdio.h>

int isPronic(int num) {
    for (int i = 0; i * (i + 1) <= num; i++) {
        if (i * (i + 1) == num) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPronic(n))
        printf("%d is a Pronic number.\n", n);
    else
        printf("%d is NOT a Pronic number.\n", n);

    return 0;
}
