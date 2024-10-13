/**
Write a C program that uses nested loops to print the following number pattern:

    1
   121
  12321
 1234321
123454321 */

#include <stdio.h>

int main(){
      int i, j, k, n;
      printf("Enter the number of rows: ");
      scanf("%d", &n);
      for(i=1; i<=n; i++){
            for(j=1; j<=n-i; j++){
                  printf(" ");
            }
            for(k=1; k<=i; k++){
                  printf("%d", k);
            }
            for(k=i-1; k>=1; k--){
                  printf("%d", k);
            }
            printf("\n");
      }
      return 0;
}