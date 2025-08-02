#include<stdio.h>
#include<math.h>
int digit(int);
int digit(int n)
{
    int c=0,dig;
    while(n>0)
    {
        dig=n%10;
        n=n/10;
        c++;
    }
    return c;
}
int isPrime(int n)
{
    int c=0;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
        if(c==2)
        return 1;
        else
        return 2;
}

 int main()
 {
    int n,di,flag=0;
    printf("ENTER THE NUMBER TO CHECK : ");
    scanf("%d",&n);
    int dig=digit(n);
    int num=n;
    for(int i=1;i<=dig;i++)
    {
    di=num%10;
     num=num/10;
    num=di*(int)pow(10,dig-1)+num;
    if(isPrime(num)==2)
    {
        flag=1;
        break;
    }
}
if(flag!=1)
{
    printf("circuler Prime");
}
else{
    printf("not circuler Prime");
}
}

