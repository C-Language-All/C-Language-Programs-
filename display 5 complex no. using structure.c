#include <stdio.h>

typedef struct complex_number{
    int real;
    int img;
	}comp;
	

void display(comp show){

	printf("The real no. is : %d\n",show.real);
	printf("The img. no. is : %d\n",show.img);
	
	}
	
	
int main(){
	comp c[5];
	
	//taking values of real and imaginary part
	for(int i=0;i<5;i++)
	{
		printf("Enter the %d real value : ",i+1);
		scanf("%d \n",&c[i].real);
		
		printf("Enter the %d imag. value : ",i+1);
		scanf("%d \n",&c[i].img);
		
		}
		
		//displaying the real and imaginary values
		for(int i=0;i<5;i++)
		{
			display(c[i]);
		}

	return 0;
	}
