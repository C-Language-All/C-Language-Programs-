#include<stdio.h>
int main(){
   //If file does not exist it will creat file automatically by itself.
  //Let assume we have a text file 'ankush.txt' ,in which we want to write "Hello Ankush".so we can do this :-
  FILE *ptr;
  ptr = fopen("ankush.txt","w");
  fprintf(ptr,"Hello Ankush");
  fclose(ptr);




  /*
//If file does not exist it will creat file automatically by itself.
  //Let assume we have a text file 'ankush.txt' ,in which we want to write "Hello Ankush" and "Hello I am here" in new line.so we can do this :-
  FILE *ptr;
  ptr = fopen("ankush.txt","w");
  fprintf(ptr,"Hello Ankush");
  fprintf(ptr,"Hello I am here");
  fclose(ptr);

//it will print"Hello I am here" in new line
*/
  
    
  return 0;
}
