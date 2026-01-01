/*the program to varify we can't change the value of a variable of a main function using call by value*/

#include<stdio.h>

int check(int x, int y);

int main()
{ 
	int a=5,b=10;
printf("The value of a and b before change is a=%d\t b=%d\n",a,b);
	
	check(a,b);
	
printf("The value of a and b after change is a=%d\t b=%d\n",a,b);	
	}
	
	int check(int x , int y){
	    x=34;
	    y=36;
		
		}
	
	
