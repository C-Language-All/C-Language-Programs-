#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for n integer and after that reallocate memory for n1 integers.

//Allocation of dynamic memory 
int n;
printf("Enter the no. of integers you want in your array : ");
scanf("%d",&n);
int *ptr;
ptr = (int *)malloc(n*sizeof(int));

//Using that heap memory as an array
printf("Before reallocation  \n");
for(int i=1;i<=n;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=n;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  printf("\n\n");
  
  //Now reallocating memory of ptr using realloc(). so i can't waste memory.
  int n1;
printf("Enter the no. of integers you want in your array for reallocation: ");
scanf("%d",&n1);
  ptr = realloc(ptr,n1*sizeof(int));
  
  
printf("After reallocation ptr size is for %d integers\n",n1);
for(int i=1;i<=n1;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=n1;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  
  return 0;
}
