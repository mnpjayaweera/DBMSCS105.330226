#include<stdio.h>
int main()
{
  int number;
  printf("enter a number");
  scanf("%d",&number);

  switch(number%2)
   {
       case0:
       printf("the number is even");
       break;
       case1:
       printf("the number is odd");
       break;

   }
  }
