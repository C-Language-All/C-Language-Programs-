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
	 	int i,j, rows,a,l;
	 	printf("enter the number of times you run program:\t");
	 	scanf("%d",&l);
	 	for(a=0;a<=l;a++)
	 	
	 	{ 
	 		printf("enter the number of rows:\t");
	 	scanf("%d",&rows);
	 	 printstar(rows, i, j);
	 		}
	 	}
		  	
