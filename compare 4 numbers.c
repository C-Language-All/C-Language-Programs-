// write a program to find greatest number
#include<stdio.h>;
int main()
{
	int num1,num2,num3,num4;
	
	
	printf("Enter 1st number\t");
	scanf("%d",&num1);
	
	printf("Enter 2nd number\t");
	scanf("%d",&num2);
	
	printf("Enter 3rd number\t");
	scanf("%d",&num3);
	
	printf("Enter 4th number\t");
	scanf("%d",&num4);
	
	//comparing 
	if(num1>num2 && num1>num3 && num1>num4)
	{
		printf("%d is greatest number",num1);
	}
	
	
	if(num2>num1 && num2>num3 && num2>num4)
	{
		printf("%d is greatest number",num2);
	}
	
	
	if(num3>num1 && num3>num2 && num3>num4)
	{
		printf("%d is greatest number",num3);
	}
	
	
	if(num4>num1 && num4>num2 && num4>num3)
	{
		printf("%d is greatest number",num4);
	}
	
	
	return 0;
	}
