 /*7. Write a program to calculate sum and average of two given float values.*/

#include <stdio.h>

int main(){
      float First_number , Second_Number , Sum , Avg;
      printf("Please enter first number : \n");
      scanf("%f", &First_number);
      printf("Please enter second Number : \n");
      scanf("%f", &Second_Number);

      Sum = Second_Number + First_number;
      Avg = Sum/2;

      printf("You Enterd %.2f and %.2f and the sum and Average is : \n" , First_number , Second_Number);
      printf("sum : %.2f \n" , Sum);
      printf("Average : %f \n" , Avg);

      return 0 ;
}