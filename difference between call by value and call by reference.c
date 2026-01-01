/* difference between call by value and call by reference in printing address of a variable */

#include<stdio.h>

void printAdd1(int a){

printf("The address of variable a is %u\n\n", &a);

}

void printAdd2(int *b){

printf("The address of variable i is %u\n\n",b);

}



int main(){

int i = 4; 
	
printf("The value of variable i is %d\n\n", i); 
	
//call by value
printAdd1(i);
printf("The address of variable i is %u\n\n", &i);
	
//call by reference
 printAdd2(&i);
 printf("The address of variable i is %u\n", &i);
 
  return 0;

}
