//check occurence of character in string

#include <stdio.h>

#include <string.h>


int occurence(char saral[], char c){
  char *ptr = saral;
	int count=0;
	while(*ptr !='\0')
	{     if(*ptr == c)
	     {
	     	count++;
	     }
		ptr++;
	}
	return count;
	}

int main(){
	
	char anku[] = "AnkushSaral";
  

int count = occurence(anku, 'S');

	
	printf("the character is %d",count);
	
	
	return 0;
	}
