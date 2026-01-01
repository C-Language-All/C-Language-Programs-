#include<stdio.h>
#include<math.h>
int factorial(number)
 {
 	if(number==0||number==1)
 	{
 		return 1;
 		}
    else
 		{
 			return number*factorial(number-1);
 			}
 			}
 	int main()
 	{    
 		int number;
 		start:
 		printf("enter the number:\t");
 		scanf("%d",&number);
 		printf("factorial of %d is %d\n",number,factorial(number));
 		goto start;
 		}
 		
