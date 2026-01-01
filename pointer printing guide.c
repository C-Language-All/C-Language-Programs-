#include<stdio.h>
int main()
{
	int a=5; //a is a variable
	int *p=&a; /*p is a pointer who store the     
	            address of a*/
	
	//first method
	printf("the address of a is=\t%x\n",p); 
	printf("the value of a is = \t%d\n\n",*p);
	
	
	//2nd method
	printf("the address of a is=\t%x\n",&a);
	printf("the value of a is = \t%d\n\n",a);
	
	
	printf("the address of pointer is=\t%x\n",&p);
	printf("Pointer's value's address is=\t%x",&*p);
	
	// you can also use %p instead of %x for printing pointer
	}
	
