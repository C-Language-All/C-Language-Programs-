#include<stdio.h>
float ankush( float p,float n,float r)
{    
	      float si;
	    
       return si=p*r*n/100;
	
            }
	
	int main()
  { 
  	   float simple_interest;
  	   float p,r,n;
  	   int a,i;
   printf("number of time you run this program:\t");
  	   scanf("%d",&a);
   for(i=1;i<=a;i++)
  	  { printf("enter the value of p:\t");
  	   scanf("%f",&p);
  	   printf("enter the value of n:\t");
  	   scanf("%f",&n);
  	   printf("enter the value of r:\t");
  	   scanf("%f",&r);
  	   simple_interest=ankush(p,n,r);
      
      printf("simple interest = Rs.%.3f\n",simple_interest); }
		
		}
		
