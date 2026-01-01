#include<stdio.h>



int main(){
  
//Let assume we have three integers in file "anku.txt" 
  FILE *ptr;
  int a,b,c;
  ptr = fopen("anku.txt","r");
  fscanf(ptr,"%d %d %d",&a,&b,&c);
  printf("The three integers are : %d %d %d",a,b,c);
  



  
return 0;
  }
