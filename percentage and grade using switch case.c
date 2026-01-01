#include <stdio.h>
#include <math.h>
int main()
{
	int per;
	int m1,m2,m3,m4,m5;
	printf("enter the marks in maths:");
	scanf("%d",&m1);
	printf("enter the marks in english:");
	scanf("%d",&m2);
	printf("enter the marks in physics:");
	scanf("%d",&m3);
	printf("enter the marks in chemistry:");
	scanf("%d",&m4);
	printf("enter the marks in hindi:");
	scanf("%d",&m5);
	per=(m1+m2+m3+m4+m5)*100/500;
	printf("your percentage is: %d\n",per);
	
	switch(per)
	{   
		case 60 ... 100:
		printf("your grade is A");
		break;
		
		case 50 ... 59:
		printf("your grade is B");
		break;
		
		case 33 ... 49:
		printf("your grade is C");
		break;
		
		default:
		printf("you are fail");
		break;
		
	}
	
	}
