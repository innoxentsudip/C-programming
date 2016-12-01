/*
Student name:Sudip Kuikel

*/
#include<stdio.h>
int main ()
{
    int i,b;
    printf("Enter a number=");
    scanf("%d",&b);


printf("----------------------------------------------------- \n");
printf("Natural number \t");
printf("|square numbers |\t");
printf("cube numbers| \t \n");
printf("----------------------------------------------------- \n");
for (i=1;i<=b;i++)
{



printf("\t%d\t|\t",i);
printf("%d \t|\t",i*i);
printf("%d\t    | \n",i*i*i);
printf("----------------------------------------------------- \n");
}
return 0;
}
