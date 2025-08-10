#include <stdio.h>
#include<conio.h>
int acker(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return acker(m - 1, 1);
    else
        return acker(m - 1, acker(m, n - 1));
}

int main() {
    int m, n;
    printf("Enter values of m and n: ");
    scanf("%d %d", &m, &n);

    int result = acker(m, n);
    printf("Ackermann(%d, %d) = %d\n", m, n, result);

    return 0;
}
