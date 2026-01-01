#include<stdio.h>
#include <math.h>
int main()
{
	int x,n,i=1;
	long double result;
	while(i<=5)
	{
		printf("enter the value of base:");
		scanf("%d",&x);
		printf("enter the value of power:");
		scanf("%d",&n);
		result=pow(x,n);
		printf("%d to the power %d = %LF \n\n",x,n,result);
		i++;
		}
		}
