/*the program for 
addition of a number in pointer
substraction of a number in pointer
difference between 2 pointers
comparing two pointers condition is true
comparing two pointers condition is false*/


//in my system 1 integer has 4 bytes
// ptr++ means ptr = ptr+1 , increment by 1 integer
// ptr-- means ptr = ptr-1 , decrement by 1 integer
// ptr = ptr+2 means,increment by 2 integer

#include <stdio.h>
int main(){
	
	int i=34;
	int *ptr = &i;
	
	printf("The value of ptr is %u \n",ptr);
	
	//addition of a number in pointer
	ptr++;
	printf("The value of ptr is %u \n",ptr);
	/*you can direcrt increment number in printf
	printf("The value of ptr is %u \n",ptr++);
	answer will be same*/

	
	
	//substraction of a number in pointer
	ptr--;//ptr=ptr-1
	printf("The value of ptr is %u \n",ptr);
	/*you can direcrt substract number in printf
	printf("The value of ptr is %u \n",ptr--);
	answer will be same*/
	

	//difference between 2 pointers
	ptr = (ptr+1)- ptr;
	printf("The value of ptr is %u \n",ptr);
	/*you can direcrt calculate the difference between 2 pointers in printf
printf("The value of ptr is %u \n",(ptr+1)- ptr);
	answer will be same*/
	
	
	//comparing two pointers condition is true
	ptr=(ptr+1) > ptr;
    printf("The value of ptr is %u \n",ptr);
	/*you can direcrt compare 2 pointers in printf
printf("The value of ptr is %u \n", (ptr+1) > ptr);
	answer will be same*/
	
	
	
	//comparing two pointers condition is false
	ptr=(ptr+1) < ptr;
    printf("The value of ptr is %u \n",ptr);
	/*you can direcrt compare 2 pointers in printf
printf("The value of ptr is %u \n", (ptr+1) < ptr);
	answer will be same*/
	
	return 0;
	}
