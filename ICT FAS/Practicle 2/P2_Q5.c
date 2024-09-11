/*5.  Calculate volume of a cube.*/

#include <stdio.h>
int main(){
      int Side_Length;
      float Volume ;

      printf("Please Enter the Side Length of The Cube : \n");
      scanf("%d" , &Side_Length);
      
      Volume = Side_Length*Side_Length*Side_Length;

      printf("The Volume of The Cube is %.3f  Cubic Units " , Volume);

      return 0;
}