/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(){
  int mark1, mark2;
  float average;
  
  printf("Enter the first number: ");
  scanf("%d",&mark1);
  
  printf("Enter the second number: ");
  scanf("%d",&mark2);
  
  average= (float)(mark1 + mark2)/2;

  printf("The Average of %d and %d is: %.2f",mark1,mark2,average);
  
  return 0;
}
