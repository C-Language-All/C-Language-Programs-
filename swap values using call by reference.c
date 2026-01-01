//swap values using call by reference

/*in call by reference we pass address of variable to function . by passing address of variable we can change the actual value of variable in function*/

/*in call by value we pass value of variable to function . by passing value of variable we can't change the actual value of variable in function*/

#include<stdio.h>
int swap(int *x, int *y);

int main()
{ int a=5,b=10;
printf("The value of a and b before swap is a=%d\t b=%d\n",a,b);
	
	swap(&a,&b);
	
printf("The value of a and b after swap is a=%d\t b=%d\n",a,b);	
	}
	
	int swap(int *x , int *y){
	int temp;
	temp = *x; //using *x = value of address at x
	*x = *y;   
	*y = temp;
		}
	
	
