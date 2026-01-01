#include <stdio.h>
#include <math.h>
int main()
{
int d;
 // C program to print day of week name using switch case
 printf("Enter the days");
 scanf("%d",&d);
 switch(d)
 {
  case 1:
  printf("the day is monday");
  break;
  case 2:
  printf("the day is tuesday");
  break;
  case 3:
  printf("the day is wednesday");
  break;
  case 4:
  printf("the day is thusday");
  break;
  case 5:
  printf("the day is friday");
  break;
  case 6:
  printf("the day is saturday");
  break;
  case 7:
  printf("the day is sunday");
  break;
  default:
  printf("the day is anything");
  }
  }
