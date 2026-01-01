//A program for sum of n natural numbers using iteration function

#include <stdio.h>
int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
      return sum;
}
