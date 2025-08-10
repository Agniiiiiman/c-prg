#include<stdio.h>
int isPrime(int);
int isPrime(int n)
{
    int c=0;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            c++;
        }
       
    }
    return c;
}

void main()
{
  int a,b;
  printf("ENTER 1ST NUMBER ");
  scanf("%d",&a);
   printf("ENTER 2nd NUMBER ");
   scanf("%d",&b);

int c=isPrime(a);
int d=isPrime(b);
if(c==2 && d==2 && (a-b==2 || b-a==2))
{
    printf("The two numbers are Twin Prime ");
}
else{
    printf("The number is not twin Prime");
}

}