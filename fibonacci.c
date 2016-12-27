#include<stdio.h>
int main ()
{
int a=1,b=1,temp,i;


for(i=1;i<=10;i++)
{
temp=a+b;
printf("%d \t",a);
a=b;
b=temp;




}

return 0;
}
