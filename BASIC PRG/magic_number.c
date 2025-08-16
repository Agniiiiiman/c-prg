#include <stdio.h>


int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int isMagicNumber(int num) {
    int result = num;

    
    while (result > 9) {
        result = sumOfDigits(result);
    }

    
    return (result == 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isMagicNumber(num)) {
        printf("%d is a Magic Number\n", num);
    } else {
        printf("%d is NOT a Magic Number\n", num);
    }

    return 0;
}
