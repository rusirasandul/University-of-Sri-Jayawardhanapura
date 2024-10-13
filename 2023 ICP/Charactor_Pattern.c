/**

Character Pattern with Conditions

Write a C program that takes an integer n as input and prints the following pattern using nested loops:

A
BC
DEF
GHIJ
...
The pattern should continue for n rows. */

#include <stdio.h>

int main(){
      int i, j, k, n;
      char ch = 'A';
      printf("Enter the number of rows: ");
      scanf("%d", &n);
      for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                  printf("%c", ch);
                  ch++;
            }
            printf("\n");
      }
      return 0;
}