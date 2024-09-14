/*6. Write a program to evaluate odd numbers and even numbers. (Prompt user to enter a 
number) */
#include <stdio.h>

int main() {
      int number;
      
      printf("Enter a number: ");
      scanf("%d", &number);
      
      if (number % 2 == 0) {
            printf("%d is an even number.\n", number);
      } else {
            printf("%d is an odd number.\n", number);
      }
      
      return 0;
}