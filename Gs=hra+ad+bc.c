#include<stdio.h>
int main()
{
	int BS;
	float GS,HRA,AD;
	
	BS=1500;
	
	if(BS>1500)
	HRA=1200;
	AD=1000;
	
	
    if(BS<=1500)
	HRA=15%BS;
	AD=32%BS;
	
	GS=BS+AD+HRA;
	printf("Gross salary of employ is %f",GS); 
		}
