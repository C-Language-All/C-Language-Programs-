#include <stdio.h>
#include <math.h>
int main() 
{ int a,b,c,d,e;
	float per;
	
	a=80,b=50,c=60,d=45,e=80;
	
	per=(a+b+c+d+e)/500*100;
	
	if(per>60)
	printf("first division");
	
	else if((per<60)&&(per>50))
	printf("second division");
	
	else
	printf("third division");
	}