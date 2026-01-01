//program for number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int number,guess,nguess=1;
	srand(time(0));
	number = rand()%100+1;
	
	//%100+1 used for number between 0 to 100
	
	//printf("the random number is %d\n",number);
	
	
	do
	{
	printf("Enter a number between 0 to 100\t\n");
	scanf("%d",&guess);
	
		 if(guess>number)
	 {
	 	printf("Lower please\n");
	 }
	 
	 else if(guess<number)
	{
		printf("Higher please\n");
	}
	
	else
	{
	printf("you are won in %d attempt\n",nguess);
	}
		
		nguess++;
	}while(guess!=number);
	
	return 0; }
