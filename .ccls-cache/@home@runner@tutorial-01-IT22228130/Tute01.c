/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, avgMarks;
  
  printf("Enter mark 1: ");
  scanf("%d", &mark1);

  printf("Enter mark 1: ");
  scanf("%d", &mark2);

  avgMarks = mark1 + mark2;

  printf("The average of the two marks = %d", avgMarks);
  
  return 0;
}