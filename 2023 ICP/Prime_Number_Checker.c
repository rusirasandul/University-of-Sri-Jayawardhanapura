/**
Prime Number Checker with a Twist

Write a C program that takes an integer as input and uses a loop to determine if it's a prime number.
 However, instead of using the modulo operator (%), use bitwise operations to check divisibility. */

#include <stdio.h>
#include <stdbool.h>

int main(){
      int num;
      bool isPrime = true;
      printf("Enter a number: ");
      scanf("%d", &num);
      if(num < 2){
            isPrime = false;
      }
      for(int i=2; i<=num/2; i++){
            if((num & i) == 0){
                  isPrime = false;
                  break;
            }
      }
      if(isPrime){
            printf("%d is a prime number.\n", num);
      } else {
            printf("%d is not a prime number.\n", num);
      }
      return 0;
}

//without bitwise operations
//use methods 
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
  if (num <= 1) return false;
  if (num <= 3) return true;
  if ((num & 1) == 0 || num % 3 == 0) return false; 

  for (int i = 5; i * i <= num; i += 6) {
    if ((num & (1 << (i - 1))) == 0 || (num & (1 << (i + 1))) == 0) { 
      return false;
    }
  }

  return true;
}

int main() {
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (isPrime(num)) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is not a prime number.\n", num);
  }

  return 0;
}
