//in my system 1 integer has 4 bytes
// ptr++ means ptr = ptr+1 , increment by 1 integer
// ptr-- means ptr = ptr-1 , decrement by 1 integer
// ptr = ptr+2 means,increment by 2 integer
#include <stdio.h>
int main(){
	
	int i=34;
	int *ptr = &i;
	
	printf("The value of ptr is %u \n",ptr);
	
	ptr++;//ptr=ptr+1
	printf("The value of ptr is %u \n",ptr);
	
	ptr--;//ptr=ptr-1
	printf("The value of ptr is %u \n",ptr);

	//we can add multiple integers to pointer
	ptr=ptr+2;
	printf("The value of ptr is %u \n",ptr);
	
	return 0;
	}
