#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j;
    printf("ENTER NUMBER IN ROWS: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for ( j=0;j<i;j++)

        {
            printf("%c",'A'+j);

        }
        printf("\n");
        getch();
    }
}