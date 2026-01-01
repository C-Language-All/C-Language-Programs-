#include <stdio.h>
int main()
{
	int anku[2][2];
	anku[0][0]=12;
	anku[0][1]=13;
	anku[1][1]=14;
	anku[1][0]=15;
	printf("printing the array elements\n");
	printf("%d\t",anku[0][0]);
	printf("%d\n",anku[0][1]);
	printf("%d\t",anku[1][1]);
	printf("%d\n",anku[1][0]);
	printf("\n");
	}
