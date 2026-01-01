#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int outcome(char you, char comp) {
  // Equal to condition
  if (you == comp) {
    return 0;
  }

  // other conditions
  // w-g,g-w,g-s,s-g,s-w,w-s
  if (you == 'w' && comp == 'g') {
    return 1;
  } else if (you == 'g' && comp == 'w') {
    return -1;
  }

  if (you == 'g' && comp == 's') {
    return 1;
  } else if (you == 's' && comp == 'g') {
    return -1;
  }

  if (you == 's' && comp == 'w') {
    return 1;
  } else if (you == 'w' && comp == 'w') {
    return -1;
  }
}

int main() {
  printf("\nEnter 's' for snake , 'w' for water and 'g' for gun \n");

  // Taking input from computer and you.
  
  char comp;
  char you;
  
  printf("Enter your option : ");
  scanf("%c", &you);

  int number;
  srand(time(0));
  number = rand() % 100 + 1;
  //%100+1 used for number between 1 to 100
  // if you remove %100+1 it can creat number random
  if (number < 33) {
    comp = 's';
  } else if (number >= 33 && number <= 66) {
    comp = 'g';
  } else if (number > 6633) {
    comp = 'w';
  }

  // Taking result from function
  int result = outcome(you, comp);

  if (result == 0) {
    printf("Your match is Tie\n");
    printf("You choosed %c and computer also choosed %c", you, comp);
  }
  if (result == 1) {
    printf(" You won the match\n ");
    printf("You choosed %c and computer choosed %c", you, comp);
  }
  if (result == -1) {
    printf(" You loose the match ! \n ");
    printf("You choosed %c and computer choosed %c\n", you, comp);
  }
  return 0;
}
