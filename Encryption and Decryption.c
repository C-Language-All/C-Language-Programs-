#include <stdio.h>

// encryption using function
char encryption(*anku){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr+1;
		*ptr++;
	}
	
	
	}
	
//decrption using function
char decryption(*anku){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr-1;
		*ptr++;
	}
	
	}

int main(){
	
	
	char anku[500000];
	int a;
	printf("Enter the code : ");
	gets(anku);
    
	printf("Enter 1 for encryption or 2 for decryption : ");
	scanf("%d",&a);
	
	
	
	
	
	if(a == 1)
	{ 
		encryption(anku);
		printf("your secret code is : %s",anku);
	}
	if(a == 2)
	{
		
		decryption(anku);
		printf("your decoded code is : %s",anku);
	
	}
	
	
	
	
	return 0;
	}
