/*
Student Name:Sudip Kuikel
Subject:Programming Fundamentals
Roll No.:
Program:To find first and last number
Lab No.:
Date:29-11-2016
*/
#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter a number=");
    scanf("%d",&a);
    b=a;
    a%=10;
    printf("The last digit is %d \n",a);
   while(b>=10)
        b/=10;
    printf("The first digit is %d",b);
    return 0;


    }
