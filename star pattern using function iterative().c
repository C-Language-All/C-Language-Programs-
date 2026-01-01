#include<stdio.h>
void starpatteren() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \t");
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{  for(int j=0;j<=i;j++)
		
		{
			printf("*"); }
			
			printf("\n");
			}
			}

 int main()
 {   
 	 starpatteren();
 }
