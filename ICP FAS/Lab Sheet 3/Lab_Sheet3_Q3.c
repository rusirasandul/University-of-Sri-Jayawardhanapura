#include <stdio.h>

int main(){
      int Num1 , Num2 , Num3 , sum , Multi;
      float avg;
      printf("Pleace enter 3 integers \n");
      printf("Number 1\n");
      scanf("%d" , &Num1);
      printf("Number 2\n");
      scanf("%d" , &Num2);
      printf("Number 3 \n");
      scanf("%d" , &Num3 );

      sum = Num1 + Num2 + Num3;
      avg = sum /3.0;
      Multi = Num1 * Num2 * Num3;

      printf("The Summetion of 3 enterd numbers is = %d\n" ,sum);
      printf("The Average of 3 Numbers is =%.2f\n" ,avg );
      printf("The Multiplication of Three Numbers is =%d" ,Multi);

      return 0;

}
