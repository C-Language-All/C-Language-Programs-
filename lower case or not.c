//97 to 122 characters in english are lower case character
#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the character \t");
	scanf("%c",&ch);
	
	if( ch<=122 && ch>=97)
	{
		printf("%c is lowercse",ch);
	}
	
	else
	{
		printf("%c is not lower case",ch);
	}
	return 0;
	}