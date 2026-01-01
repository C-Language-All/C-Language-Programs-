#include<stdio.h>
int main(){

  //Let assume we have a text file 'anku.txt' ,which contain a integer 88 .so we can read that :-
  FILE *ptr;
  int num;
  ptr = fopen("anku.txt","r");
  fscanf(ptr,"%d",&num);
  printf("The no. inside the file is %d ",num);
  fclose(ptr);

/*
  //Let assume we have a text file 'anku.txt' ,which contain 2 integers 88 99.so we can read that :-
  FILE *ptr;
  int num;
  int num2;
  ptr = fopen("anku.txt","r");
  fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num2);
  printf("The no. inside the file is %d %d ",num,num2); 
  fclose(ptr);
 */


  
    
  return 0;
}
