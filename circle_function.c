/*
  Student Name:Sudip Kuikel
  Roll No.:23
  Subject:Programming fundamental
  Date:2017-01-12
 */
#include<stdio.h>
#define PI 3.14


void circumference(int c);
void diameter( int d);
void area(int ar);

int main()
{
int r;
printf("**********************************************************\n");
printf("Enter radius of circle=");
scanf("%d",&r);
	circumference(r);
	diameter(r);
	area(r);
	return 0;
	
	}
	
void circumference(int r)
{
float ci;
ci=2* PI *r;
printf("circumference=%.2f \n",ci);
}

void diameter(int r)
{
int di;
di=2*r;
printf("diameter=%d \n",di);
}
void area(int r)
{
float a;
a=PI * r*r;
printf("area=%.2f \n",a);
printf("**********************************************************");
}

