#include<stdio.h>
int main()
{
    int i,j,k,l;
     for (k=1;k<=2;k++)
{


    for(i=1;i<=10;i++)
{
    for (j=1;j<=i;j++)
    {
 if(j==1|| i==j|| i==10 ||j==4 && i==7)
        printf("* ");

        else
        printf("  ");

    }
 printf("\n");
    }
}
for(l=1;l<=5;l++)
    printf("* \n");
}
