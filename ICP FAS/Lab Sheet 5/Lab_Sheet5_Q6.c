#include <stdio.h>
int main() {
      int monthlySaving = 200;
      int totalSavings = 0;

      for (int i = 0; i < 12; i++) {
            totalSavings += monthlySaving;
      }

      printf("Total savings after 12 months: %d dollars\n", totalSavings);

      return 0;
}