/*5. Write a program to print area and perimeter of a given square and a rectangle. (Prompt 
user to enter values)*/

#include <stdio.h>

int main() {
      float length, width, side;
      float area_square, perimeter_square, area_rectangle, perimeter_rectangle;

      // Prompt user to enter values
      printf("Enter the length of the rectangle: ");
      scanf("%f", &length);
      printf("Enter the width of the rectangle: ");
      scanf("%f", &width);
      printf("Enter the side length of the square: ");
      scanf("%f", &side);

      // Calculate area and perimeter of the square
      area_square = side * side;
      perimeter_square = 4 * side;

      // Calculate area and perimeter of the rectangle
      area_rectangle = length * width;
      perimeter_rectangle = 2 * (length + width);

      // Print the results
      printf("Area of the square: %.2f\n", area_square);
      printf("Perimeter of the square: %.2f\n", perimeter_square);
      printf("Area of the rectangle: %.2f\n", area_rectangle);
      printf("Perimeter of the rectangle: %.2f\n", perimeter_rectangle);

      return 0;
}
