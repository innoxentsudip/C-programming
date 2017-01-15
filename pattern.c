/*
Name:Sudip Kuikel
Programme:BCS(Hons)
Semester:First
Roll No:21
Date:2016-01-15
Program:To make Pattern
*/
#include<stdio.h>
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();

int main()
{
	pattern1();
	pattern2();
	pattern3();
	pattern4();
	pattern5();	
	pattern6();
	pattern7();
	pattern8();

}
void pattern1()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
void pattern2()

	{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
printf("\n");
		printf("\n");	
}
	
void pattern3()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			
		if(i<=j)
				printf("*");
				else
				printf(" ");
		}
		printf(" \n");
	}
	
}

void pattern4()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			
		if(i<=j)
		
				printf("%d",j);
				else
				printf(" ");
		}
		printf(" \n");
	}
	
}
void pattern5()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			
		printf("*");
		}
		printf(" \n");
	}
	
}




	
void pattern6()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			
		printf("%d",j);
		}
		printf(" \n");
	}
	
}
void pattern7()
{
	int i,j;
	for (i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(i<=j)
			printf("*");
			else
		printf(" ");
		}
		printf(" \n");
	}
	
}
void pattern8()
{
	int i,j;
	for (i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(i<=j)
			printf("%d",j);
			else
		printf(" ");
		}
		printf(" \n");
	}
	
}

	
