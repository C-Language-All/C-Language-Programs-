#include <stdio.h>
int main(){
	int num;
printf("enter the number that's table you want ");
	scanf("%d",&num);
	
	int mul[10];
	
	for(int i=0;i<10;i++){
	mul[i] = num*(i+1);
		}
		
		for(int i=0;i<10;i++){
		printf("%d*%d=%d\n",num,i+1,mul[i]);
		}
	
	
	}
