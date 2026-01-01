#include <stdio.h>
#include <string.h>

struct vector{
int x,y;
};

struct vector sumVector(struct vector v1,struct vector v2){
struct vector result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	return result;
};
	

int main(){
	struct vector v1,v2,sum;
	v1.x = 4;
	v1.y = 10;
	printf("The x dim is %d and y dim is %d \n",v1.x,v1.y);
	
	v2.x = 20;
	v2.y = 13;
	printf("The x dim is %d and y dim is %d \n",v2.x,v2.y);
	
   
   sum = sumVector(v1,v2);
   printf("The result of x dim is %d and y dim is %d ",sum.x,sum.y);
	
		
		return 0; 
		}
		
