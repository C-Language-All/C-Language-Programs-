#include <stdio.h>
int main()
{   int ankush,ravi,pappu;
	  end:
	printf("enter the number of time you run 1st loop:\t");
	scanf("%d",&ankush);
	printf("enter the number of time you run 2nd loop:\t");
	scanf("%d",&ravi);
	printf("enter the number of time you run 3rd loop:\t");
	scanf("%d",&pappu);
	
	printf("the output is:-\t\n");
	for(int i=0;i<=ankush;i++)
	{
		for(int j=0;j<=ravi;j++)
		{
			for(int k=0;k<=pappu;k++)
			{
				
				printf("%d %d %d\n",i,j,k);
				
				if(j==1)
				{goto end;}
				
				}
				}
				}
				}
