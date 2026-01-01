#include <stdio.h>
#include <string.h>

struct anku{ //structure defining
    int roll_no ; //variable declaring
	float marks ; //variable declaring
	char name[50] ; //variable declaring
	};
	
int main(){
	struct anku a;
	struct anku b;
	
	a.roll_no = 1003; //variable value
	a.marks = 86.77; //variable value
	strcpy(a.name,"Ankush Saral"); //variable value
	
	b.roll_no = 1004; //variable value
	b.marks = 74.33; //variable value
	strcpy(b.name,"Ravi Baghel"); //variable value
	
	
	
	printf("%d\n",a.roll_no); // print value 
	printf("%f\n",a.marks); // print value 
	printf("%s\n",a.name); // print value 
	
	printf("%d\n",b.roll_no); // print value 
	printf("%f\n",b.marks); // print value 
	printf("%s\n",b.name); // print value 
	
	
		
		
		return 0; 
		}
		
/*	
		
You can also give value in string using pointer directly
		
#include <stdio.h>


struct anku{ //structure defining
    int roll_no ; //variable declaring
	float marks ; //variable declaring
	char *name ; //variable declaring
	};
	
int main(){
	struct anku a;
	struct anku b;
	
	a.roll_no = 1003; //variable value
	a.marks = 86.77; //variable value
	a.name = "Ankush Saral"; //variable value
	
	b.roll_no = 1004; //variable value
	b.marks = 74.33; //variable value
	b.name = "Ravi Baghel"; //variable value
	
	printf("%d\n",a.roll_no); // print value 
	printf("%f\n",a.marks); // print value 
	printf("%s\n",a.name); // print value 
	
	printf("%d\n",b.roll_no); // print value 
	printf("%f\n",b.marks); // print value 
	printf("%s\n",b.name); // print value 
	
	
		
		
		return 0; 
  }*/
