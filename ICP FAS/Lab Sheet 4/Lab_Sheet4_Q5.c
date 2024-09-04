#include <stdio.h>
#include <math.h>
int main(){
   float X1, Y1, X2, Y2, Distance;

   printf("Enter the x-coordinate of the first point: ");
   scanf("%f", &X1);
   printf("Enter the y-coordinate of the first point: ");
   scanf("%f", &Y1);
   printf("Enter the x-coordinate of the second point: ");
   scanf("%f", &X2);
   printf("Enter the y-coordinate of the second point: ");
   scanf("%f", &Y2);

      Distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

   printf("The distance between the two points is %.2f\n", Distance);

   return 0;
}