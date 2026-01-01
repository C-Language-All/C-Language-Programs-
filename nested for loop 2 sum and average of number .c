#include <stdio.h>
int main()
{   int n,k;
	float sum=0,average,num;
printf("enter the number of times run 1st loop:\t");
	scanf("%d",&n);
printf("enter the number of values you required:\t");
	scanf("%d",&k);
	
for(int i=1;i<=n;i++)
	{	printf("for %d time run:-\n",i);
		sum=0;
		
		for(int j=1;j<=k;j++)
		{   
			printf("enter the %d value:\t",j);
			scanf("%f",&num);
		
	    sum+=num;//you can also use	sum=(sum+num);
			}
			
	printf("the sum of given number is =%f\n",sum);
		average=sum/k;
		printf("the average is =%f\n",average);
			
		}
		}
		
		
