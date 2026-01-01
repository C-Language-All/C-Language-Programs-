#include <stdio.h>
#include <string.h>

struct employee{ 
    int code ; 
	float salary ; 
	char name[50] ; 
	};
	
int main(){
	struct employee e1,e2,e3;
	
	//taking details of employee 1
	printf("Enter code for employee 1 : ");
	scanf("%d",&e1.code);
	printf("Enter salary : ");
	scanf("%f",&e1.salary);
	printf("Enter name : ");
	scanf("%s",e1.name);//without spaces . if you want spaces then use gets()method.You can also use '&' in scanf output will be same.
	
	
	
	//taking details of employee 2
	printf("Enter code for employee 2 : ");
	scanf("%d",&e2.code);
	printf("Enter salary : ");
	scanf("%f",&e2.salary);
	printf("Enter name : ");
	scanf("%s",e2.name);//without spaces . if you want spaces then use gets()method.You can also use '&' in scanf output will be same.
	
	
	
	//taking details of employee 3
	printf("Enter code for employee 3 : ");
	scanf("%d",&e3.code);
	printf("Enter salary : ");
	scanf("%f",&e3.salary);
	printf("Enter name : ");
	scanf("%s",e3.name);//without spaces . if you want spaces then use gets()method.You can also use '&' in scanf output will be same.
	
	printf("\n\n");
	
	
	//printing details of employee 1
	printf("%d\n",e1.code); 
	printf("%f\n",e1.salary);  
	printf("%s\n",e1.name); 
	printf("\n\n");
	
	//printing details of employee 2
	printf("%d\n",e2.code); 
	printf("%f\n",e2.salary);  
	printf("%s\n",e2.name); 
	printf("\n\n");
	
	
	
	//printing details of employee 3
	printf("%d\n",e3.code); 
	printf("%f\n",e3.salary);  
	printf("%s\n",e3.name); 
	printf("\n\n");
	
	
	
	
	
		
		
		return 0; 
		}
		
