#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for 6 integer and after that reallocate memory for 10 integers.

//Allocation of dynamic memory using malloc.You can use calloc as well.
int *ptr;
ptr = (int *)malloc(6*sizeof(int));

//Using that heap memory as an array
  printf("Before reallocation ptr size is for 6 integers\n");
for(int i=1;i<=6;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=6;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  
  printf("\n\n");
  
  
  //Now reallocating memory of ptr using realloc(). so i can't waste memory.
  ptr = realloc(ptr,10*sizeof(int));
  
  printf("After reallocation ptr size is for 10 integers\n");
for(int i=1;i<=10;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=10;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  
  return 0;
}
