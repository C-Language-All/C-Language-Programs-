// program for calculate factorial using recursive function

#include<stdio.h>
#include<math.h>

//defination + prototype of function
int factorial(int number)
 { 
 	//printf("calling factorial %d\n",number); 
 	
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
 		printf("enter the number:\t");
 		scanf("%d",&number);
 		printf("factorial of %d is %d",number,factorial(number));
 		}
 		
