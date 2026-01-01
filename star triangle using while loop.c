#include<stdio.h>
#include<math.h>
int main()
{
	int rows,a,b;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	
	a=0;
	while(a<rows)
	{   
		 b=1;
		while(b<a)
		{  
			printf("%d",b);
			b++;
			}
		printf("\n");
		a++;
		}
		}
	
