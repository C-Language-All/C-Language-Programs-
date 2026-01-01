//i++ means first print then increment
//++i means first increment then print

#include<stdio.h>
int main() {
	int a=5;
	printf("The value of a after a++ is %d\n",a++);
	printf("The value of a is %d\n\n",a);
	
	int i=5;
	printf("The value of a after ++i is %d\n",++i);
	printf("The value of i is %d\n",i);
	
	return 0;
	}