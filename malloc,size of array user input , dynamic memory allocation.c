#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for n integer.

//Allocation of dynamic memory by user input
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int *ptr;
ptr = (int *)malloc(n*sizeof(int));

//Using that heap memory as an array
for(int i=1;i<=n;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=n;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  return 0;
}
