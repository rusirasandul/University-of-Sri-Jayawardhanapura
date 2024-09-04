#include <stdio.h>
    const float PRICE_BREAD = 150.0;
    const float PRICE_EGGS = 100.0;
    const float PRICE_BUTTER = 800.0;
    const float PRICE_MILK = 500.0;
    const float PRICE_JAM = 500.0;
 int main(){
      int Q_Bread , Q_Eggs , Q_Butter , Q_Milk , Q_Jam;
      float Total_Bread , Total_Eggs , Total_Butter , Total_Milk , Total_Jam , Sub_Total;

      printf("|----------------------------------------|\n"
             "|  Welcome to the Grocery Store!         |\n"
             "|----------------------------------------|\n"
             "|\t Available Items\t         |\n"
             "|Item\t\t|Unit Price (in LKR)     |\n"
             "|\t                \t         |\n"
             "|Bread \t\t\t |150.00\t |\n"
             "|Eggs \t\t\t |100.00\t |\n"
             "|Butter \t\t |800.00\t |\n"
             "|Milk \t\t\t |500.00\t |\n"
             "|Jam \t\t\t |500.00\t |\n"
             "|----------------------------------------|");

        printf("\n\nEnter the quantity of each item you want to purchase\n");
        printf("Bread: ");
        scanf("%d", &Q_Bread);
        printf("Eggs: ");
        scanf("%d", &Q_Eggs);
        printf("Butter: ");
        scanf("%d", &Q_Butter);
        printf("Milk: ");
        scanf("%d", &Q_Milk);
        printf("Jam: ");
        scanf("%d", &Q_Jam);

        Total_Bread = PRICE_BREAD * Q_Bread;
        Total_Eggs = PRICE_EGGS * Q_Eggs;
        Total_Butter = PRICE_BUTTER * Q_Butter;
        Total_Milk = PRICE_MILK * Q_Milk;
        Total_Jam = PRICE_JAM * Q_Jam;

        Sub_Total = Total_Bread + Total_Eggs + Total_Butter + Total_Milk + Total_Jam;

        printf("\n\n|----------------------------------------|\n"
               "|  Your Bill is as follows:              |\n"
               "|----------------------------------------|\n"
               "|Item\t\t|Quantity\t|Total Price\t|\n"
               "|----------------------------------------|\n"
               "|Bread\t\t|%d\t\t|%.2f\t\t|\n"
               "|Eggs\t\t|%d\t\t|%.2f\t\t|\n"
               "|Butter\t\t|%d\t\t|%.2f\t\t|\n"
               "|Milk\t\t|%d\t\t|%.2f\t\t|\n"
               "|Jam\t\t|%d\t\t|%.2f\t\t|\n"
               "|----------------------------------------|\n"
               "|Sub Total\t\t\t\t|%.2f\t\t|\n"
               "|----------------------------------------|\n", Q_Bread, Total_Bread, Q_Eggs, Total_Eggs, Q_Butter, Total_Butter, Q_Milk, Total_Milk, Q_Jam, Total_Jam, Sub_Total);
        printf("\n\nThank you for shopping with us!\n");
        return 0;       


 }