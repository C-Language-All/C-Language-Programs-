#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number\t:\t");
	scanf("%d",&num);
	
	//Without using logical operator
	if(num==1)
	{
		printf("your number is 1\n");
	}
	else if(num==2)
	{
		printf("your number is 2\n");
		}
	else if(num==3)
		{
			printf("your number is 3\n");
			}
	else
		{
			printf("your number is not 1,2,3\n");
				}
	
	//using logical operator
	if(num==1 || num==2 || num==3)
		{
		printf("your number is %d\n",num);
			}
			
	else
	{
		printf("your number is not 1,2,3\n");
	}
	}
	
