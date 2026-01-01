#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    //Calculate the factorial of a given number
  int i,factorial=1,n;
  
  printf("enter the value of number:\t ");
  scanf("%d",&n);
  for(i=1;i<=n;i=i+1)
  factorial=factorial*i;
  printf("the factorial of %d is: %d",n,factorial);
  return 0;
}
