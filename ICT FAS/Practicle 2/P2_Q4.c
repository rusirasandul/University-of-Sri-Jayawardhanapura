/*4.  Calculate a bike’s average consumption from the given total distance 
(integer value) traveled (in km) and spent fuel (in liters).   
Test Data : 
Distance in km: 350  
Fuel spent in liters: 5  
Expected Output: 
Average consumption (km/lt) 70.000*/

#include <stdio.h>
int main(){
      int Distance , Fuel_Spent ;
      float Average_Consumption;

      printf("Pleace enter the Distence in KM : \n");
      scanf("%d", &Distance);
      printf("Please enter Used Fuel in Liters : \n");
      scanf("%d", &Fuel_Spent);
     
      Average_Consumption = Distance / Fuel_Spent;

      printf("Average consumption (km/lt) %.3f\n", Average_Consumption);

      return 0;

}