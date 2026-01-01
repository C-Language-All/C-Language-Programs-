#include <stdio.h>
#include <string.h>//for strlen
int main(){
	
	//strlen() (for counting lenght of string)
	char *str1 = "Ankush";
	int a = strlen(str1);
	printf("%d\n\n",a);
	
	
	//strcpy() (for copy string1 to string 2)
	//we can also use str2[]
	//we can't use *str3 in this kyuki hame size batana hoga jisme copy kar rahe h uska and usko khali bhi rakhna hoga so only option str3[]
	char *str2 = "Rahul";
	char str3[30];
	strcpy(str3,str2);
	printf("Now str3 is : %s\n\n",str3);
	
	
	
	//strcat() (for adding 1 string to other)
	//is function se 2nd string 1st string se attach ho jayegi .isliye hame 1st string mai size likhna hoga isliye ham 1st string ko pointer nahi bana sakte kyuki pointer banayenge to size nahi likh payenge
	char str4[50] = "Ravi";
	char *str5 = "Hero";
	strcat(str4,str5);
	printf("Now str4 is : %s",str4);
	
	
	
	
	
	
	
	return 0;
	}
