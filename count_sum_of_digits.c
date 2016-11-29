/*
Student Name:Sudip Kuikel
Subject:Programming Fundamentals
Roll No.:
Program:To calculate sum of digits of any numbers.
Lab No.:


Date:29-11-2016
*/
#include<stdio.h>
int main ()
{
int a,b,sum=0;

printf("Enter a number:");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
sum+=b;
a/=10;
}

printf("%d",sum);
return 0;
}
