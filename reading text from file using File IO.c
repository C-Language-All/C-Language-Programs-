#include<stdio.h>
int main(){

/*
  //Let assume we have a text file 'anku.txt' ,which contain a string "hello".so we can read that :-
  FILE *ptr;
  char num[100];
  ptr = fopen("anku.txt","r");
  fscanf(ptr,"%s",&num);
  printf("The text is : %s",num);
  fclose(ptr);

*/


  
/*
  //Let assume we have a text file 'anku.txt' ,which contain a string "hello".so we can read that :-
  FILE *ptr;
  char num[] = "anku.txt";
  ptr = fopen("anku.txt","r");
  fscanf(ptr,"%s",&num);
  printf("The text is : %s",num);
  fclose(ptr);
*/




/*
//Let assume we have a text file 'anku.txt' ,which contain a string "hello saral".so we can read that :-
  FILE *ptr;
  char num[] = "anku.txt";
  char num2[] = "anku.txt";
  ptr = fopen("anku.txt","r");
  fscanf(ptr,"%s",&num);
  fscanf(ptr,"%s",&num2);
  printf("The text is : %s %s",num,num2);
  fclose(ptr);
*/


  
/*
//Let assume we have a text file 'anku.txt' ,which contain a string "hello saral".so we can read that :-
   FILE *ptr;
   char c;

   ptr = fopen("anku.txt", "r");
   if (ptr == NULL) {
      printf("Could not open file ");
      return 1;
   }

   while ((c = getc(ptr)) != EOF) {
      printf("%c", c);
   }
   fclose(ptr);

*/



    
  return 0;
}
