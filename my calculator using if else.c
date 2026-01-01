#include<stdio.h>
#include<math.h>
int main()
{ char operation;
	double n1,n2;
	start:
	
printf("\n \n enter the operator(+,-,*,/):-\t");
	scanf("%c",&operation);
	printf("\n enter  operand number one:-\t");
	scanf("%lf ",&n1);
	printf("\n enter  operand number two:-\t");
	scanf("%lf",&n2);
	
	if(operation == '+')
	{   
		printf("\n %.1lf+%.1lf=%.1lf",n1,n2,n1+n2);}
		
	if(operation =='-')
	{
		printf("\n %.1lf-%.1lf=%.1lf",n1,n2,n1-n2);}
	
	if(operation =='*')
	{
		printf("\n %.1lf*%.1lf=%.1lf",n1,n2,n1*n2);}
		
      if(operation =='/')
	{
		printf("\n %.1lf/%.1lf=%.1lf",n1,n2,n1/n2);}
		
		
	goto start;
	
}
		
		
		

		
		
		
		

		
		
		
