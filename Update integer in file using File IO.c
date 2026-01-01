#include<stdio.h>

//Assume we have a file File.txt which have a integer value '2' and we will update that file by multiplying it's value by 2.

int main() {
  FILE *ptr;
  int num;

  //Opening file for reading
  ptr = fopen("File.txt","r");
  fscanf(ptr,"%d",&num);
  fclose(ptr);
    
 //Opening file for writing (updating)
  ptr = fopen("File.txt","w");
  fprintf(ptr,"%d",num*2);
  fclose(ptr);
  
  
  return 0;
}
