#include<stdio.h>



int main(){
  
//Let assume we have have a file File1.txt in which we have a text "Ankush Saral" which we want to write in File2.txt.
  FILE *ptr1;
  FILE *ptr2;
  int num;
  ptr1 = fopen("File1.txt","r");
  ptr2 = fopen("File2.txt","w");
  char c = getc(ptr1);

  while (c != EOF){
  putc(c,ptr2);
    c = getc(ptr1);
    }
  fclose(ptr1);
  fclose(ptr2);



  
return 0;
  }
