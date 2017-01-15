#include<stdio.h>

void main()
{
int a,i,j,k;
scanf("%d",&a);
for(i=a;i>=1;i--)
{
	k=1;
	for(j=1;j<=a;j++)
	{
		if (i<=j)
printf("%d",k++);
else
printf(" ");
}
printf("\n");
}
}
	
