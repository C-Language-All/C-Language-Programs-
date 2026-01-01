#include <stdio.h>
#include <string.h>

struct anku{ 
    int roll_no ;
	float marks ; 
	char name[50] ; 
	};
	
int main(){
	struct anku a = {1003,74.33,"Ankush Saral"};
	
	printf("%d\n",a.roll_no); 
	printf("%f\n",a.marks); 
	printf("%s\n",a.name);
	
	
	
	//if you want to set 0 all the elements inside a structure so you can do                        struct anku a = {0}; 
	
		
		
		return 0; 
		}
		
