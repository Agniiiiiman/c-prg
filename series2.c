/*   1
    121  
   12321  
  1234321   */
  #include <stdio.h>

int main() {
    int n;
    printf("ENTER THE END POINT");
    scanf("%d",&n);
    int rows = n;
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <=( rows - i); j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }
    return 0;
}
