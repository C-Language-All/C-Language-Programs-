//string initialize and print


#include <stdio.h>
int main(){
	
	//there are two methods to creat an string
	
	//method 1 it is lengthy
	//char str[]={'A','n','k','u','s','h','\0'};
	
	//method 2 is easy
	char str[]="Ankush";
	
	char *ptr=str;//it means ptr=&str[0];
	
/*printing strings each element using for loop
	for(;*ptr != '\0';ptr++)
	{
		printf("%c",*ptr);
	}    */
	
	
	//printing strings each element using while loop
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	}
