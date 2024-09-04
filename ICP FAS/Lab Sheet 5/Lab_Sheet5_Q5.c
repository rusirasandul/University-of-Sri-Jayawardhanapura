#include <stdio.h>

int main() {
      double balance = 5000;
      double interestRate = 0.03;
      //can check wether the balence is lessthan 5000 using if but the quection says use compound operations only
      
      balance += balance * interestRate;
      
      printf("Balance after 1 year: %.2f\n", balance);
      
      return 0;
}