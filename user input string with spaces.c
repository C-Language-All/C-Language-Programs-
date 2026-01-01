//user input strings with spaces

//multi word string using "gets()" function
   #include <stdio.h>
   int main(){
	char t[30];
	printf("Enter your name :  ");
	gets(t);
	printf("your name is : %s ",t);
	} 

	/*you can use "puts()" function to print string in new line
	try this program
	
	#include <stdio.h>
    int main(){
	char t[30];
	printf("Enter your name :  ");
	gets(t);
    puts(t);
	}
*/
