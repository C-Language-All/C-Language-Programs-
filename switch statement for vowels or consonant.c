#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{ 
 //C program to check vowel or consonant using switch case 
 char ch;
 printf("enter the alphabet");
 scanf("%c",&ch);
 switch(ch)
 {
  case 'a':
 printf("this is vowel");
 break;
 
 case 'e':
 printf("this is vowel");
 break;
 
 case 'i':
 printf("this is vowel");
 break;
 case 'o':
 printf("this is vowel");
 break;
 case 'u':
 printf("this is vowel");
 break;
  default:
  printf("this is consonant");
}
}
