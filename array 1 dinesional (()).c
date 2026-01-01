#include<stdio.h>

int main()
{
	//One dimensional array
	int marks[5], sum=0;
	printf("Enter marks of 5 students : \n\n");
	for (int i=1;i<=5;i++)
	{
	printf("Marks of %d student : \t", i);
	scanf("%d", &marks[i]);
  	sum += marks[i];
	}
    printf("sum of marks is =%d",sum);
	int average = sum/5;
	printf("\nThe average marks of 5 students =%d", average);
	return 0;
}
