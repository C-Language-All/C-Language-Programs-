#include <stdio.h>
#include <math.h>
int main()
{
 int num,factorial=1;
 printf("enter the number you want fectorial:");
 scanf("%d",&num);
 
 for(int i=num;i>=1;i--)
 {
  factorial=factorial*i;
  }
  printf("the fectorial of %d is :%d",num,factorial);
  }
