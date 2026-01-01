#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for multiplication table upto 10 integer and after that reallocate memory for multiplication table upto 15 integer.

//Allocation of dynamic memory 
int *ptr;
ptr = (int *)malloc(10*sizeof(int));

//Using that heap memory for muliplication table
  printf("Multiplication table of 7 up to 10\n");
for(int i=1;i<=10;i++){
	ptr[i] = 7*(i);
  printf("7 x %d = %d \n",i,ptr[i]);
  
}


  
  printf("\n\n");
  
  
  //Now reallocating memory of ptr using realloc(). so i can't waste memory.
  
  ptr = realloc(ptr,15*sizeof(int));
    printf("Multiplication table of 7 up to 15\n");
for(int i=1;i<=15;i++){
	ptr[i] = 7*(i);
  printf("7 x %d = %d\n ",i,ptr[i]);
  
}

  
  return 0;
}
