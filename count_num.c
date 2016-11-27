/*
Student Name :Sudip Kuikel
Subject : Programming Fundamental
Lab No. : 17
Program : To count digits in a number.
Date : 2016-11-20
*/
#include<stdio.h>
int main ()
{
    int a,count=0;
    printf("Enter a number:");
    scanf("%d",&a);

    while   (a!=0)
    {
        a=a/10;
        count++;
    }
        printf("No. of digits =%d",count);
    return 0;
}
