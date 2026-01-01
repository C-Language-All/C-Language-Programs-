//program for random number between 0 to 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int number;
	srand(time(0));
	number = rand()%100+1;
	
	//%100+1 used for number between 1 to 100
	//if you remove %100+1 it can creat number random
	printf("the random number is %d",number);
	return 0; }
