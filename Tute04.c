/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int max(int no1, int no2);
int min(int no1, int no2);


int main() {
   int no1, no2,maximum, minimum;
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
    
  maximum = max(no1, no2);  
  minimum = min(no1, no2);
  
   
   printf("%d ", min(no1, no2));
   printf("%d ", max(no1, no2));
  
   return 0;
}

