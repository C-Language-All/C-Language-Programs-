#include<stdio.h>
void printstar(int rows, int i, int j)
{
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		printf("*",j);
		printf("\n");
			
		  }
		  }
  int main()
	 {    
	 	int i,j, rows;
	 	
	 	 printf("enter the number of rows:\t");
	 	scanf("%d",&rows);
	 	 printstar(rows, i, j);
	 	}
		  	
