#include<stdio.h>
int main()
{
    int i,x;



    i='a';
    x='A';
     printf("Small letters\n");
     printf("-------------\n");
    printf("\n");
    while(i<='z')
    {
        printf("%c\t",i);
        i++;
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Capital letters\n");
    printf("---------------\n");
     printf("\n");
    while(x<='Z')
    {

    printf("%c\t",x);
    x++;
    }
}
