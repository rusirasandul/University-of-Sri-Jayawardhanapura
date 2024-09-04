#include <stdio.h>
const int Borrowing_Limit = 5;

int main(){
      int Overdue_Books  ;
      
      printf("Do you Have any Overdue Books? If yes enter the number of Overdue Books: ");
      scanf("%d", &Overdue_Books);
      if (Overdue_Books > Borrowing_Limit){
            printf("You have exceeded the borrowing limit\n");
            printf("You Cannot Borrow More Books\n");
            printf("'1'");
      }
      else{
            printf("You have not exceeded the borrowing limit\n");
            printf("You Can Borrow More Books\n");
            printf("'0'");
      }
      return 0;
}