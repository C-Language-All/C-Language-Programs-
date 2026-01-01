#include <stdio.h>
#include <math.h>
int main()
{
	int i,f,n;
	f=1;i=1;
	printf("enter the value of n:\t");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i=i+1;
		}
		printf(" factorial of %d is: %d\n",n,f);
		}
		
		
