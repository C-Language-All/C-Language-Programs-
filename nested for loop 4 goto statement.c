#include <stdio.h>
int main()
{   int k;
	float sum=0,average,num;
	start:
printf("enter the number of values you required:\t");
	scanf("%d",&k);
	
        sum=0;
	    for(int j=1;j<=k;j++)
		{   
			printf("enter the %d value:\t",j);
			scanf("%f",&num);
		
	         sum=(sum+num);
			}
			
	printf("the sum of given number is =%f\n",sum);
		average=sum/k;
		printf("the average is =%f\n",average);
			
		
		if(sum>50)
		{
			goto start;
			}
			
		printf("ravi to nalla h\n\n");
		}
		
		
