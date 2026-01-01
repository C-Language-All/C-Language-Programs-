/*return and update multiple values in void function using call by reference*/


#include <stdio.h>

void sumAndAvg(int a,int b,float *sum,float *avg);

int main() {
	int a=3,b=4;
	float sum,avg;
	
	sumAndAvg(a,b,&sum,&avg);
	
	printf("The sum is %f\n",sum );
	printf("The average is %f\n",avg );
}

void sumAndAvg(int a,int b,float *sum,float *avg){
	*sum = a+b;
	*avg = (float) *sum/2;
	}
