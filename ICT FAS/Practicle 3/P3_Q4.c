/*4. Write a program to add, subtract and divide given two numbers. (Prompt user to input 
numbers)*/
#include <stdio.h>

int main(){
      int Num1 , Num2 ;
      printf("This is A programme to Add, Subtract and Divide two numbers\n");
      printf("Menu\n"
      "1. Add\n"
      "2. Subtract\n"
      "3. Divide\n"
      "4. Exit\n");

      printf("Please Enter the First Number\n");
      scanf("%d", &Num1);
      printf("Please Enter the Second Number\n");
      scanf("%d", &Num2);

      int option;

      switch(option){
            case 1:
                  printf("The Sum of %d and %d is %d\n", Num1, Num2, Num1 + Num2);
                  break;
            case 2:
                  printf("The Difference of %d and %d is %d\n", Num1, Num2, Num1 - Num2);
                  break;
            case 3:
                  printf("The Division of %d and %d is %d\n", Num1, Num2, Num1 / Num2);
                  break;
            case 4:
                  printf("Exit\n");
                  break;
      }

      return 0;

}