// Write a program to calculate income tax if income is
// 2.5 lakh to 5 lakh - tax = 5%
// 5 lakh to 10 lakh - tax = 20%
// above 10 lakh - tax = 30%

#include <stdio.h>
int main(){
	float income, tax=0;
	
	printf("Enter your income\t");
	scanf("%f",&income);
	
	if(income>=250000 && income<=500000)
	{
		tax= tax+0.05*(income-250000);
		}
		
		if(income>=500000 && income<=1000000)
	{
		tax= tax+0.20*(income-500000);
		}
		
		if(income>=1000000)
	{
		tax= tax+0.30*(income-1000000);
		}
		
		
		
		
	printf("your income is %f \n and tax on your income is %f\n",income,tax);
	
	
	}
