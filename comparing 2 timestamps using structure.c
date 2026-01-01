#include <stdio.h>

typedef struct dates_compare{

	int date;
	int month;
	int year;
	int hour;
	int minute;
	int second;
	}dc;
	
void show(dc d1,dc d2){
	printf("Date is : %d/%d/%d %d:%d:%d \n",d1.date,d1.month,d1.year,d1.hour,d1.minute,d1.second);
	printf("Date is : %d/%d/%d %d:%d:%d\n",d2.date,d2.month,d2.year,d2.hour,d2.minute,d2.second);

	}
	

int compare(dc d1,dc d2){

	if(d1.year>d2.year)
	{
		return 1;
	}
	if(d1.year<d2.year)
	{
		return -1;
	}
	
	if(d1.month>d2.month)
	{
		return 1;
	}
	
	if(d1.month<d2.month)
	{
		return -1;
	}
	
	if(d1.date>d2.date)
	{
		return 1;
	}
	
	if(d1.date<d2.date)
	{
		return -1;
	}
	
	if(d1.hour>d2.hour)
	{
		return 1;
	}
	
	if(d1.hour<d2.hour)
	{
		return -1;
	}
	
	if(d1.minute>d2.minute)
	{
		return 1;
	}
	
	if(d1.minute<d2.minute)
	{
		return -1;
	}
	
	
	if(d1.second>d2.second)
	{
		return 1;
	}
	
	if(d1.second<d2.second)
	{
		return -1;
	}
	
	
	return 0;
	}

int main(){
	int a;
	dc d1 = {23,06,2022,18,24,54};
	dc d2 = {23,06,2022,6,30,32};
	
	//Printing both dates
	show(d1,d2);
	
	//comparing both dates
	a = compare(d1,d2);
	printf("The comparision is : %d",a);
	
	
	return 0;
	}
