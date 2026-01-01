#include<stdio.h>
#include<math.h>
int main()
{ int sec,ss,mm,hh;
	sec=7500;
	hh=sec/3600;
	mm=(sec-hh*3600)/60;
	ss=sec-hh*3600-mm*60;
	printf("7500 seconds into hour is \n%d seconds = %d hours:%d minutes:%d seconds",sec,hh,mm,ss);
	}
