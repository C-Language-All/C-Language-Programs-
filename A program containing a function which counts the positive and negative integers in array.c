//A program containing a function which counts the positive and negative integers in array

#include<stdio.h> 

void count(int *arr, int n){

 int positive=0,negative=0;
 for(int i=0;i<n;i++)
 {
 	if(arr[i]>=0){
 	//printf("the %d number is positive\n",i+1);
 		positive++;
 }
 
 	else{
 	//printf("the %d number is negative\n",i+1);
    
    negative++;
  }}
  
printf("the %d number is positive and %d number is negative\n",positive,negative);
  }

int main(){

int arr[] = {-1,-2,-3,4,5,6,7}; 

count(arr, 7);


return 0;

}
