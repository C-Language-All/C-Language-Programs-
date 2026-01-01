#include <stdio.h>
#include <string.h>

struct employee{ 
    int code ;
    char name[50];
	};
	
int main(){
	struct employee e1;
	struct employee *ptr;
	ptr = &e1;
	
	(*ptr).code = 1001;
	strcpy((*ptr).name,"Ankush Saral");
   //You can also use ptr->code = 1001;  instead of (*ptr).code = 1001; output will be same.        Here -> is known as arrow operator.
	
	printf("%d \n",e1.code);
	printf("%s \n",e1.name);
		
		return 0; 
		}
		
