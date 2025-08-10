#include<stdio.h>
#include<conio.h>

void main()
{
    int tm;
    int grade;
    printf("ENTER TOTAL MARKS SECURED BY THE STUDENT  IN THE SEMESTER EXAM ");
    scanf("%d",&tm);
    if(tm<0 || tm>100)
    {
        printf("INVALID MARKS . ENTER MARKS BETWEEN 0-100");

    }
    else{
         grade=(tm>=90) ? 1: (tm>=80) ? 2:(tm>=70) ? 3: (tm>=60) ? 4:(tm>=50) ? 5: 6;

    }
     switch (grade)
     
     {
     case 1:
        /* code */
        printf("GRADE A ");
        break;
        case 2:
        /* code */
        printf("GRADE B");
        break;
        case 3:
        /* code */
        printf("GRADE C ");
        break;
        case 4:
        /* code */
        printf("GRADE D ");
        break;
        case 5:
        /* code */
        printf("GRADE E");
        break;
        case 6:
        /* code */
        printf("GRADE FAIL ");
        break;
     
     default:
     printf("INVALID GRADE");
        break;
     }
}