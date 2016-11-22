/*
Student Name :Sudip Kuikel
Subject : Programming Fundamental
Lab No. : 16
Program : Write a to find the sum of square of first n numbers.
Date : 2016-11-22
*/
#include<stdio.h>
int main ()
{
	int i,n,sum=0;
	printf("Enter numbers of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (i%2==0)
		{
			printf("even numbers =%d \n",i);
			sum+=i;
		}
	}
			printf("\n Sum of even numbers %d \n \n  ",sum);
		sum=0;
		
	
	for(i=1;i<=n;i++)
	{
		
		if (i%2!=0)
			{
				printf("odd numbers =%d \n",i);
		
			sum+=i;
		}
		}
			printf("\n Sum of odd numbers %d \n",sum);
		
	
		
	}
	
