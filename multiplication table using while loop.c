#include <stdio.h>
#include <math.h>
int main()
{
	int i=1,a,j;
	printf("enter the no.");
	scanf("%d",&a);
	printf("enter the limit:");
	scanf("%d",&j);
	printf("multiplication table of %d is\n",a);
	while(i<=j)
	{
		printf("%d*%d=%d\n",i,a,i*a);
		i++;
		}
		}
