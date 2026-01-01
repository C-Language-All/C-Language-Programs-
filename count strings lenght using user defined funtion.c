//count strings lenght using user defined funtion
//this function counts space in string as a lenght
//so we can mimus 1 from count to calculate accurate lenght of string for this string

#include <stdio.h>
int main(){

	char *ptr = "Ankush Saral";
	int count=0;
	
	for(;*ptr!='\0';*ptr++)
	{
		count++;
	}
	 printf("%d",count-1);

	
	
	
	}
