//passing array to function using pointer

#include <stdio.h>

//method 1 receaving array using pointer
int array_passing(int *ptr , int n){
	for(int i=0;i<n;i++){
	printf("the value of %d is %d\n",i+1,*(ptr+i));
		}
	}
	
	
	/*method 2 receaving array using array
	int array_passing(int ptr[] , int n){
	for(int i=0;i<n;i++){
	printf("the value of %d is %d\n",i+1,ptr[i]);
		}
	}*/
	
	

int main(){
	int arr[]={23,65,87,76,90};
	array_passing(arr,5);
	return 0;
	}
