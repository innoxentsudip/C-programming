//program to write a name
#include<stdio.h>
#include<stdlib.h>
void printu();
void printi();
void prints();
void printd();
void printp();
int main()
{
	
    prints();
  
   printu();
   
   printd();
   
     printi();
    
       printp();
}
void printu()
{

  int i,j;
  for(i=1;i<=5;i++)
  {
      for(j=1;j<=5;j++)
      {
       if(j==1||j==5||i==5)
          printf("*");
        else
            printf(" ");

      }
      printf("\n");
  }
 
}
   void printi()
  {
        int i,j;
         
    for(i=1;i<=5;i++)
  {
      for(j=1;j<=5;j++)
      {
       if(i==1||j==3||i==5)
          printf("*");
        else
            printf(" ");

      }
      printf("\n");
  }



}
void prints()
 {
        int i,j;
    for(i=1;i<=5;i++)
  {
      for(j=1;j<=5;j++)
      {
       if(i==1||i==3||i==5||j==1&&i!=4||j==5&&i!=2)
          printf("*");
        else
            printf(" ");

      }
      printf("\n");
  }

 
}
void printd()

{
        int i,j;
    for(i=1;i<=5;i++)
  {
      for(j=1;j<=5;j++)
      {
       if(i==j||i==5||j==1)
          printf("*");
        else
            printf(" ");

      }
      printf("\n");
  }


}
void printp()

{
        int i,j;
    for(i=1;i<=5;i++)
  {
      for(j=1;j<=5;j++)
      {
       if(j==1||i==1||j==5&&i!=4&&i!=5||i==3)
          printf("*");
        else
            printf(" ");

      }
      printf("\n");
  }


}

