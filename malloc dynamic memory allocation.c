#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for 6 integer.

//Allocation of dynamic memory 
int *ptr;
ptr = (int *)malloc(6*sizeof(int));

//Using that heap memory as an array
for(int i=1;i<=6;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=6;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  return 0;
}
