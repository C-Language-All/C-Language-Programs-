#include<stdio.h>
#include<math.h>
int main()
{ char operation;
	double n1,n2;
	printf("enter the operator(+,-,*,/):-\t");
	scanf("%c",&operation);
	printf("enter  operand number one:-\t");
	scanf("%lf ",&n1);
	printf("enter  operand number two:-\t");
	scanf("%lf",&n2);
	
	switch(operation)
	{ 
		case '+':
		printf("%.1lf+%.1lf=%.1lf",n1,n2,n1+n2);
		break;
		
		case '-':
		printf("%.1lf-%.1lf=%.1lf",n1,n2,n1-n2);
		break; 
		
		case '*':
		printf("%.1lf*%.1lf=%.1lf",n1,n2,n1*n2);
		break;
		
		case '/':
		printf("%.1lf/%.1lf=%.1lf",n1,n2,n1/n2);
		break;
		
	
		
		default:
		printf("your operands are not correct");
		
		}
}
		
		
		

		
		
		
		

		
		
		
