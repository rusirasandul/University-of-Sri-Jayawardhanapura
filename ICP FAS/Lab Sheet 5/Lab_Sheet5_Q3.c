#include <stdio.h>
const int Bonus =0.05;

int main(){
      int Monthly_Salery , Annual_Salery, BonusAmount;
      printf("Enter the Monthly Salery: ");
      scanf("%d", &Monthly_Salery);

      Annual_Salery = Monthly_Salery * 12;
      BonusAmount = Annual_Salery * Bonus;
      
      printf("Annual Salery: %d\n", Annual_Salery);
      printf("Bonus Amount: %d\n", BonusAmount);

      return 0;
}