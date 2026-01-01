#include<stdio.h>



int main(){
  
//Let assume we have have a file table.txt in which we want to write table of a number 
  FILE *ptr;
  int num;
  printf("Enter the no. which table you need: ");
  scanf("%d",&num);
  ptr = fopen("table.txt","w");

  for (int i=1;i<=10;i++){
  fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    }
  fclose(ptr);



  
return 0;
  }
