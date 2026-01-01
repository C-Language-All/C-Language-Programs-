#include<stdio.h>
#include<math.h>
int main()
{
    float p, n ;
    float r, si ;
    int i,a;
    
    printf("how many time you run this:\t");
    scanf("%d",&a);

   for ( i = 1 ; i<= a ; i= i + 1 )
{   
	printf ( "enter value of p:\t" ) ;
scanf( "%f ", &p ) ;
 printf( "enter value of n:\t" ) ;
scanf( "%f ",&n) ;
 printf( "enter value of r:\t" ) ;
scanf ( "%f", &r ) ;

si = p * n * r / 100 ;
 printf ( "Simple Interest = Rs.%f\n", si ) ;
 
	}

}
