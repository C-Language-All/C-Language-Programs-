#include<stdio.h>
float ankush()
{    
	float p,r,n,z;
	
printf("enter the value of principle amount:\t");
		scanf("%f",&p);
	printf("enter the value of rate:\t");
	    scanf("%f",&r);
	printf("enter the number of year:\t");
		scanf("%f",&n);
	
	return z=p*r*n/100;
	
	}
	
	int main()
	{
        float si;
		si=ankush();
		printf("simple interest is %f",si);
		}
		
