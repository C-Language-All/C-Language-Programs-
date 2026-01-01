//decrption using function

#include <stdio.h>
void encryption(*anku){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr-1;
		*ptr++;
	}
	
	}

int main(){
	
	
	char anku[50000];
	printf("Enter your code : ");
	gets(anku);
	encryption(anku);
	printf("your string is : %s",anku);
	
return 0;
	}
