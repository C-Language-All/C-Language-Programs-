#include <stdio.h>

// encryption using function
char encryption(*anku,int c){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr+c;
		*ptr++;
	}
	
	
	}
	
//decrption using function
char decryption(*anku,int c){
	char *ptr=anku;
	
	while(*ptr != '\0')
	{
		*ptr = *ptr-c;
		*ptr++;
	}
	
	}

int main(){
	
	
	char anku[500000];
	int a,b;
	printf("Enter the code : ");
	gets(anku);
    
	printf("Enter 1 for encryption or 2 for decryption : ");
	scanf("%d",&a);
	
	
	
	
	
	if(a == 1)
	{   printf("How many times do you want to encrypt : ");
		scanf("%d",&b);
		encryption(anku,b);
		printf("your secret code is : %s",anku);
	}
	if(a == 2)
	{
		printf("How many times do you want to decrypt : ");
		scanf("%d",&b);
		decryption(anku,b);
		printf("your decoded code is : %s",anku);
	
	}
	
	
	
	
	return 0;
	}
