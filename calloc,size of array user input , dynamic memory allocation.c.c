#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for n integer.

//Allocation of dynamic memory by user input
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int *ptr;
ptr = (int *)calloc(n,sizeof(int));

//Using that heap memory as an array
for(int i=1;i<=n;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
}

//Printing the array you made
for(int i=1;i<=n;i++){
  printf("The value of %d element is: %d\n",i,ptr[i]);
  }
  
  
  
  
  //In calloc the defalut value of element is 0. So if you directly print that element without giving it any value so it will print 0 as an default value.
  return 0;
}
