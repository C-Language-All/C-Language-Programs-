#include <stdio.h>
#include <math.h>
int main()
{ int age=46;
	float sex='M',ms='U';
	if((ms=='M')||(ms=='U'&&sex=='M'&& age>30)||(ms=='U'&&sex=='F'&& age>25))
	printf("driver is insured");
	else
	printf("driver is not insured");
	}
	
