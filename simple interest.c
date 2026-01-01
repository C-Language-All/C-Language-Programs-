#include<stdio.h>
#include<math.h>
int main()
{
    float p, n, i ;
    float r, si ;
    printf ( "enter value of p:\t" ) ;
scanf( "%f ", &p ) ;
 printf( "enter value of n:\t" ) ;
scanf( "%f ",&n) ;
 printf( "enter value of r:\t" ) ;
scanf ( "%f", &r ) ;
 si = p * n * r / 100 ;
	
printf ( "Simple Interest = Rs.\t%.3f\n", si ) ;

}
