#include <stdio.h>
#include <math.h>
int main()
{
	int a,i,sum=0;
	printf("enter the term");
	scanf("%d",&a);
	printf("natural numbers are\n");
	for(i=1;i<=a;i=i+1)
	{
		printf("%d\n",i);
		sum +=i;
		}
		
		printf("sum is=%d\n",sum);
		}
