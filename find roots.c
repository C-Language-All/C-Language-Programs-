# include<stdio.h>
# include<conio.h>
# include<math.h>
int main ()
{
   float a,b,c,r1,r2,d;
    a=10,b=1000,c=100;
    d=(b*b)-(4*a*c);
   if (d>0)
   {
      r1 = -b+sqrt (d) / (2*a);
      r2 = -b-sqrt (d) / (2*a);
      printf ("the real roots are\n r1 = %f\n r2 = %f\n", r1, r2);
   }
   else if (d==0){
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      printf ("roots are equal =%f %f", r1, r2);
   }
   else
      printf("Roots are imaginary");
}
