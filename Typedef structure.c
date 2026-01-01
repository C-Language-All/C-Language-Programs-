#include <stdio.h>
#include <string.h>

typedef struct employee{ 
    int code ;
    char name[50];
	}emp;
	
	
void show(emp emp1){
printf("The code of employee is: %d \n",emp1.code);
printf("The code of employee is: %s \n",emp1.name);
	}
	
int main(){
	emp e1;
	emp *ptr;
	ptr = &e1;
	
	ptr->code = 1001;
	strcpy(ptr->name,"Ankush Saral");
   
   
   show(e1);
	
		
		return 0; 
		}
		
