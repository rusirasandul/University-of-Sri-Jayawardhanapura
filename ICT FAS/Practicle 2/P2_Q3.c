/*Write a C program to convert temperature from Celsius to Fahrenheit 
 
 
 
                              100 Celsius = 212.00 Fahrenheit*/
#include <stdio.h>

int main(){

      Float Celsius , Fahrenheit;
      printf("Enter the temperature in Celsius : ");
      scanf("%f", &Celsius);
      Fahrenheit = (Celsius * 9/5) + 32;
      printf("%.2f Celsius = %.2f Fahrenheit", Celsius, Fahrenheit);
      return 0;
}