#include<stdio.h>
#include<conio.h>
int main()
{
int x,low,high,mid,anku[7]={23,34,45,56,67,78,89};
	
	low=23; high=89; mid=23+89/2;
	if(x==anku[mid])
	{
		printf("%d",mid); }
		
		else if(x>anku[mid])
		{
			low=mid+1; }
			
			else
			{  high=mid-1; }
				
	
			}
