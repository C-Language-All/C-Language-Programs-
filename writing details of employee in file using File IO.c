#include<stdio.h>

int main() {
  int empNumber;
  char name[100];
  float salary;
  printf("Enter total no. of employees: ");
  scanf("%d", &empNumber);

  // Opening the file in write mode
  FILE *ptr;
  ptr = fopen("File.txt", "w");

  for (int i = 1; i <= empNumber; i++) {
    
    printf("Enter name of employee %d: ", i);
    scanf("%s",&name);
    printf("Enter salary of employee %d: ", i);
    scanf("%f", &salary);

    fprintf(ptr, "Name of employee %d: %s\n", i, name);
    fprintf(ptr, "Salary of employee %d: %.2f\n", i, salary);
  }

  // Closing the file
  fclose(ptr);

  return 0;
}
