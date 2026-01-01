/*increasing the value of a variable 10 times using call by reference*/

#include<stdio.h>

void printAdd(int *a){
int b = 10 * *a;
printf("The 10 times of variable i is %u\n\n", b);
}



int main(){

int i = 4; 
	
printf("The value of variable i is %d\n\n", i); 
	
printAdd(&i);

	
return 0;

}
