#include<stdio.h>
#include <math.h>
int main()
{
	int i=0,j,a;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the higher limit:");
	scanf("%d",&j);
	
	do{   i++;
		printf("%d*%d=%d\n",i,a,i*a);
		
		}
		while(i<=j);
		}
		
