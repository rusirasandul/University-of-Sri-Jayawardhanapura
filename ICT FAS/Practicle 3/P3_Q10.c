/*10. Write a C function that takes three integers as parameters and returns the value of the 
largest one*/

#include <stdio.h>
#include <math.h>

int main (){
      int Number_1 , Number_2 , Number_3;
      printf("Please enter the first Number :\n ");
      scanf("%d",&Number_1 );
      printf("Please enter the second Number :\n ");
      scanf ("%d", &Number_2 );
      printf("Please enter the third Number :\n ");
      scanf ("%d", &Number_3 );
      
      printf("The largest number is : %d \n" , largest(Number_1 , Number_2 , Number_3));
      
      return 0 ;  
}