#include<stdio.h>
#include<math.h>
int main ()
{
	int i,k,n;
	printf("enter the size of array:\t");
	scanf("%d",&k);
 printf("enter the number of values you required:\t");
	scanf("%d",&n);
	int arr[k];
	
	for(i=1;i<=n;i++)
	{
	printf("enter the value of %d element:\t",i);
		scanf("%d\n",&arr[i]);
	}
	printf("the array is:\n");
   for(i=1;i<=n;i++)
	{
printf("the value of %d element is %d\n",i,arr[i]);
		}
	}
