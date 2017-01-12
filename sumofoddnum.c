/*
  Student Name:Sudip Kuikel
  Roll No.:23
  Subject:Programming fundamental
  Date:2017-01-12
 */
#include<stdio.h>
void sum_odd();
void sum_even();
int main()
{
	sum_odd();
	sum_even();
	
}
void sum_odd()
{
	printf("Odd Numbers\n");
int i,sum=0;
for(i=501;i<=1000;i=i+2)
{
printf("%d \t",i);
sum=sum+i;
}
printf("sum=%d",sum);
printf("\n");

}

void sum_even()
{
	printf("Even Numbers\n");
int i,sum=0;
for(i=0;i<=100;i=i+2)
{
printf("%d \t",i);
sum=sum+i;
}
printf("sum=%d",sum);
}



