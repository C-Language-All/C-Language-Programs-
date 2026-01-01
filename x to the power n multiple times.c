#include <stdio.h>
#include <math.h>
 
int main()
{
    int x,n,i,a;
    double result;
    printf("enter the number of time run this program:\t");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
  {   
    printf("enter the value of base:\t");
    scanf("%d",&x);
    printf("enter the value of power:\t");
    scanf("%d",&n);
    	
    result =pow(x,n);
    printf("%d to the power of %d is= %lf\n", x,n, result);
    }
    }
    
    
    
    

