/*    *
     * *
    * * * 
   * * * * 
  * * * * *      */

  #include <stdio.h>

int main() {
    int n;
    printf("ENTER TEH END POINT");
    scanf("%d",&n);
    int rows = n;
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print asterisks with space
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
