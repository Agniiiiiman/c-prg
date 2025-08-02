#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
    char str [1000];
    int flag, i , words=0;
    printf("ENTER A STRING");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || str[i] == '\n') {
            flag = 0;
        } else if (flag == 0) {
            flag= 1;
            words++;
        }
    }

    printf("Total number of words: %d\n", words);

    return 0;
}
