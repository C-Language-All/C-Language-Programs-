#include <stdio.h>
#include <string.h>

struct employee{ 
    int code ; 
	float salary ; 
	char name[50] ;
	};
	
int main(){
	struct employee e1[50]; //array of structure of 50 employee
	
	//taking details for 1st employee
	e1[0].code = 1003;
	e1[0].salary = 86.77; 
	strcpy(e1[0].name,"Ankush Saral");
	
	//taking details for 2nd employee
	e1[1].code = 1004;
	e1[1].salary = 70.77; 
	strcpy(e1[1].name,"Ravi Baghel");
	
	//you can fill details upto to 50 employee.
	
	
	//printing details of 1st employee
	printf("%d\n",e1[0].code);
	printf("%f\n",e1[0].salary ); 
	printf("%s\n",e1[0].name); 
	
	
	printf("\n\n");
	
	//printing details of 2nd employee
	printf("%d\n",e1[1].code);
	printf("%f\n",e1[1].salary ); 
	printf("%s\n",e1[1].name); 
	
	
		
		
		return 0; 
		}
		
