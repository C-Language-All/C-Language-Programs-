#include <stdio.h>
#include <math.h>
 float roots(x)
{ return sqrt(x);
	//you can use this one also
	//float y;
	//y=sqrt(x);
	//return y;
	
	
	}
	
	
int main()
{    float result,x;
	start:
	printf("enter the number:\t");
	scanf("%f",&x);
	
   result=roots(x);
 
    printf("the root of %f is = %f\n\n",x, result);
 goto start;
 getc;
    return 0;
}
