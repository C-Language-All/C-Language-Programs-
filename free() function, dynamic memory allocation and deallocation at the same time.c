#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //This program can allocate heap for 600 integer and deallocate memory at the same time.
  
//Allocation of dynamic memory 
int *ptr;
ptr = (int *)malloc(600*sizeof(int));

//Using that heap memory as an array
for(int i=1;i<=600;i++){
  printf("Enter the %d element: ",i);
  scanf("%d",&ptr[i]);
  free(ptr);
}


  
  return 0;
}
