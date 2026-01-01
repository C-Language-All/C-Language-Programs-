//calculate factorial using iterative function

#include<stdio.h>
#include<math.h>


int anku(number)
{
	int factorial=1,i;
	
	for(i=1;i<=number;i++)
	{
	factorial*=i;// factorial=factorial*i;
		}
	return factorial;
	
		}
		
		
	int main()
	{   int number;
		
		printf("enter the number:\t");
		scanf("%d",&number);
		printf("factorial of %d is %d\n",number,anku(number));
		
		}
