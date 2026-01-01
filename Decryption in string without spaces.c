//decrption using function

#include <stdio.h>
void decryption(*anku){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr-1;
		*ptr++;
	}
	
	}

int main(){
	
	
	char anku[]="Bolvti!Tbsbm";
	decryption(anku);
	printf("your string is : %s",anku);
	
return 0;
	}
