#include <stdio.h>
int main()
{       
    int i,a,sum=0;
	float avg;
	printf("enter the number\t:");
	scanf("%d",&a);
	printf("numbers are\n");
	for(i=1;i<=a;i++)
	{ printf("%d\n",i);
      sum +=i;}
		avg=sum/a;
	printf("The sum of given no. is = %d\nThe Average is : %f\n",sum,avg);
 
}
