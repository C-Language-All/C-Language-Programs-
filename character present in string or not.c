//character present in string or not

#include <stdio.h>

#include <string.h>


int check(char saral[], char c){
	char *ptr = saral;
	
	while(*ptr != '\0')
	{     if(*ptr == c)
	     {
	     	printf("This character is present\n");
	     }
	     
	      else
	     {
	     	printf("This character is not present\n");
	     }
		*ptr++;
	}
	
	}

int main(){
	
	char anku[] = "Ankush";

check(anku, 'n');

    return 0;
	}
