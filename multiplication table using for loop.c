#include <stdio.h>
#include <math.h>
int main()
{
	int i,a,j;
	printf("enter the no.");
	scanf("%d",&a);
	printf("enter the limit:");
	scanf("%d",&j);
	
	printf("multiplication table of %d is\n",a);
	for(i=1;i<=j;i++)
	{
		printf("%d*%d=%d\n",i,a,i*a);
		}
		}
