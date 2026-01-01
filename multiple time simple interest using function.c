#include<stdio.h>
float ankush(p,r,n,z)
{
	return z=p*r*n/100;
	}
	int main()
	{
		float p,r,n,z;
		float si;
		int a,l;
	printf("enter the number of time runing:\t");
		scanf("%d",&l);
		for(a=1;a<=l;a++)
    {
    printf("enter the value of principle amount:\t");
		scanf("%f",&p);
	printf("enter the value of rate:\t");
	    scanf("%f",&r);
	printf("enter the number of year:\t");
		scanf("%f",&n);
		
		si=ankush(p,r,n,z);
		printf("simple interest is %f\n",si);
    	}
		}
		
