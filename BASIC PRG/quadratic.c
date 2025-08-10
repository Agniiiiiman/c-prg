#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int flag;
    float a,b,c,dis,r1,r2,ip,rp;
    printf("ENTER VALUE OF COEFFICIENT ");
    scanf("%f %f %f",&a,&b,&c);
    dis=(b*b)-(4*a*c);

    if(dis>0)  
     flag=1;
    else if (dis==0)
     flag=2;
    else
     flag=3;
    switch (flag)
    {
    case 1:
    r1=(-b+sqrt(dis))/(2*a);
    r2=(-b-sqrt(dis))/(2*a);
    printf("ROOTS ARE REAL AND DISTINCT \n");
    printf("ROOTS1=%.2f  \n ROOTS2=%.2f \n",r1,r2);
        /* code */
        break;

    case 2:
    r1=r2=-b/(2*a);
    printf("ROOTS ARE REAL AND EQUAL \n");  

    printf("ROOTS1=%.2f \n ROOTS2=%.2f\n ",r1,r2);
    break;

    case 3:
    rp=-b/(2*a);
    ip=sqrt(-dis)/(2*a);
    printf("ROOTS ARE COMPLEX AND IMAGINARY. \n");
    printf("ROOT1 = %.2f + %.2fi\n", rp, ip);
     printf("ROOT2 = %.2f - %.2fi\n", rp, ip);


    
    }
}