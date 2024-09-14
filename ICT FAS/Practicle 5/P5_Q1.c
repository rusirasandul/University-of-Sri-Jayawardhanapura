/*1. Write a program to calculate the distance travel using the given formula below:  
S = vt + ½ at2  
In your program ask user to input through keyboard the value of: v = initial velocity a = 
acceleration t = time of travel*/

#include <stdio.h>
#include <math.h>

int main(){
      float v, a, t, S;
      printf("Enter the initial velocity: ");
      scanf("%f", &v);
      printf("Enter the acceleration: ");
      scanf("%f", &a);
      printf("Enter the time of travel: ");
      scanf("%f", &t);
      S = v*t + 0.5*a*pow(t,2);//or if you dont use math.h , S = v * t + 0.5 * a * t * t is correct
      printf("The distance travel is: %.2f\n", S);
      return 0;
}