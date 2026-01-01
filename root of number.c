#include <stdio.h>
#include <math.h>
int main()
{    float result,x;
	end:
	printf("enter the number:\t");
	scanf("%f",&x);
     
    result =sqrt(x);
   
 
    printf("the root of %f is = %f\n\n",x, result);
   goto end;
    return 0;
}
