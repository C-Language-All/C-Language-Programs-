// encryption using function

#include <stdio.h>
void encryption(*anku){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr+1;
		*ptr++;
	}
	
	}

int main(){
	
	
	char anku[500000];
	printf("Enter the code : ");
	gets(anku);
	encryption(anku);
	printf("your secret code is : %s",anku);
	
	
	
	
	
	return 0;
	}
