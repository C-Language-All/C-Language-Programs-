#include <stdio.h>
#include <string.h>

struct employee{ 
    int code ;
    char name[50];
	};
	
	
void show(struct employee emp){
printf("The code of employee is: %d \n",emp.code);
printf("The code of employee is: %s \n",emp.name);
	}
	
int main(){
	struct employee e1;
	struct employee *ptr;
	ptr = &e1;
	
	(*ptr).code = 1001;
	strcpy((*ptr).name,"Ankush Saral");
   
   
   show(e1);
	
		
		return 0; 
		}
		
