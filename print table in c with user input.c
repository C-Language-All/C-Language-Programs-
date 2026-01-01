#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	printf("enter the no. of table you want : ");
	scanf("%d",&num);
	
	
	printf("***multiplication table of %d is ***\n",num);
	for(int i=num;i<=(num*10);i = i+num)
	{
		printf("%d\n",i);
		}
		}
