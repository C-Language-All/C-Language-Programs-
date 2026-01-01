#include <stdio.h>
#include <math.h>
int main()
{
	int i,a,sum=0;
	printf("enter no. of terms");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		printf("%d\n",i);
		i++;
		sum +=i;
		
		}
		printf("the sum = %d\n",sum);
		}
