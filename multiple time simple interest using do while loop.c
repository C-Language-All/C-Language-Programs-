#include <stdio.h>
#include <math.h>
int main()
{
	int p,n,i=0;
	float r,si;
	do{

    printf("enter the value of principle:");
	scanf("%d",&p);
	printf("enter the value of year:");
	scanf("%d",&n);
	printf("enter the value of rate:");
	scanf("%f",&r);
		si=p*n*r/100;
		i=i+1;
	printf("The simple interest is : %f\n",si);
		}
		while(i<=5);
		
		}
	
