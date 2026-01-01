//print values in array with the help of pointer

#include <stdio.h>

int main() {

int marks [3] = {75, 92, 66};


printf("%d\n",  *(marks) );
printf("%u\n",   marks );
printf("%d\n",  *(marks+1) );
printf("%u\n", marks + 2);

//*marks is equivalent to marks[0] 
//marks is equivalent to &marks[0]
//*(marks + 1) is equivalent to marks[1] 
// marks + 2 is equivalent to &marks [2].

return 0; 

}

