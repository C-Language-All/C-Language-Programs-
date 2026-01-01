/* printing the value of a variable using pointer to pointer*/
#include <stdio.h>
int main(){
	int i=345;
	int *ptr;
	int **ptr2;
	ptr=&i;
	ptr2=&ptr;
	
	printf("The value of i is %d",**ptr2);
	}
	
