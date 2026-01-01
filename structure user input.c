#include <stdio.h>
#include <string.h>

struct anku{ 
    int roll_no ; 
	float marks ; 
	char name[50] ; 
	};
	
int main(){
	struct anku a;
	
	printf("Enter roll number : ");
	scanf("%d",&a.roll_no);
	
	printf("Enter marks : ");
	scanf("%f",&a.marks);
	
	printf("Enter name : ");
	scanf("%s",&a.name);//without spaces . if you want spaces then use gets()method.
	
	printf("%d\n",a.roll_no); 
	printf("%f\n",a.marks);  
	printf("%s\n",a.name); 
	
		
		
		return 0; 
		}
		
