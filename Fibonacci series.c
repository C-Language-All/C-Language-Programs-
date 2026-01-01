#include <stdio.h>
#include <math.h>

int fibonacci_series(int n);

int main(){
	int totalnum,n;
	
	printf("Enter the total number of series you want\t");
	scanf("%d",&totalnum);
	
	for(n=0;n<=totalnum;n++){
		printf("%d\t",fibonacci_series(n));
		}
		
	
	return 0;
	}
	
	
	fibonacci_series(int n){
		
		int fabi;
		
		if(n==0 || n==1)
		{
			return n;
		}
		
		
	 else if(n==2)
		{
			return 1;
			}
			
			
			else
			{
				return fabi*(n-1)+fabi*(n-2);
			}
		}
