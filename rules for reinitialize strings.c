//rules for reinitialize strings

#include <stdio.h>
int main(){
	
	
    //rule 1 string defined by pointer "*ptr" can be reinitialize as "ptr"
	char *ptr = "Ankush Saral";
	 ptr = "ravi nalla";
	  printf("%s",ptr);
	
	/*rule 2 string defined by ptr[] cannot be defined by "ptr"
	
	char ptr[] = "Ankush Saral";
	 ptr = "Hello brother";
	  printf("%s",ptr);*/
	
	
	
	}
