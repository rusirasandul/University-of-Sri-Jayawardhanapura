#include <stdio.h>
const int Step_Count = 10000;

int main (){
      int Steps_Taken, Step_Remaining , Step_Required , Goal_Met;
      printf("Enter the Steps Taken: ");
      scanf("%d", &Steps_Taken);
      if (Steps_Taken<Step_Count){
            Step_Remaining = Step_Count - Steps_Taken;
            printf("You need to take %d more steps to reach your goal\n", Step_Remaining);
            printf("'0'");
      }
      else if (Steps_Taken>Step_Count){
            Step_Required = Steps_Taken - Step_Count;
            printf("You have taken %d more steps than your goal\n", Step_Required);
            printf("'1'");
      }
      else{
            Goal_Met = Steps_Taken;
            printf("You have reached your goal\n");
            printf("'1'");
      }
      return 0;
}