/*6.  Calculate volume of a cylinder.*/

#include <stdio.h>
const float PI = 3.14159;

int main(){
      int Radius , Height ; //Should be float to be Practicle 
      float Volume ;

      printf("Please Enter the Radius of The Cylinder : \n");
      scanf("%d" , &Radius);
      printf("Please Enter the Height of The Cylinder : \n");
      scanf("%d" , &Height);

      Volume = PI * Radius * Radius * Height ;

      printf ("The Volume of the Cylinde is %.3f \n" , Volume);
      return 0;


}