#include<stdio.h>
int main ()
{
    int sum=0,i,a[10];
    for(i=0;i<4;i++)
    {

        scanf("%d",&a[i]);
    }
for(i=0;i<4;i++)
      {
      sum=sum+a[i];
       printf("%d\n",sum);
      }

      return 0;
}

