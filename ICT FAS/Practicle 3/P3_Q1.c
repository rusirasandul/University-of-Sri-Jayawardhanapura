/*1. Write a program to print following. 
 
************Dhal Curry**************** 
******************Prepare Coconut Milk************************* 
***Scrape coconut 
***Mix with hot water 
*************************************************************** 
***Wash and Drain dhal 
*******************Add Spices 
***Add tumeric = 0.1 t spoon 
***Add pepper = 1 t spoon 
***Add lemon grass 
***Add salt = 1 t spoon 
***Add water 
***Cook 
***Add coconut milk 
 
 
************Potato Curry**************** 
******************Prepare Coconut Milk************************* 
***Scrape coconut 
***Mix with hot water 
*************************************************************** 
***Wash and peel potato = 1 kg 
*******************Add Spices 
***Add tumeric = 0.5 t spoon 
***Add pepper = 2 t spoon 
***Add lemon grass 
*********************************Add tomato 
***Add salt = 1 t spoon 
***Add water 
***Cook 
***Add coconut milk 
 
 
************Fish Curry**************** 
******************Prepare Coconut Milk************************* 
***Scrape coconut 
***Mix with hot water 
*************************************************************** 
***Wash the fish 
*******************Add Spices 
***Add tumeric = 0.5 t spoon 
***Add pepper = 3 t spoon 
***Add lemon grass 
****************************** 
***Add salt = 1 t spoon 
***Add water 
***Cook 
***Add coconut milk*/

#include <stdio.h>

int main(){
      printf("Curry Option \n"
      "1. Dhal Curry\n"
      "2. Potato Curry\n"
      "3. Fish Curry\n"
      "4. Exit\n ");
      printf("Please Enter the Curry You Want to Prepare\n");

      int option;
      scanf("%d", &option);

      switch(option){
            case 1:
                  printf("************Dhal Curry****************\n");
                  printf("******************Prepare Coconut Milk*************************\n");
                  printf("***Scrape coconut\n");
                  printf("***Mix with hot water\n");
                  printf("***************************************************************\n");
                  printf("***Wash and Drain dhal\n");
                  printf("*******************Add Spices\n");
                  printf("***Add tumeric = 0.1 t spoon\n");
                  printf("***Add pepper = 1 t spoon\n");
                  printf("***Add lemon grass\n");
                  printf("***Add salt = 1 t spoon\n");
                  printf("***Add water\n");
                  printf("***Cook\n");
                  printf("***Add coconut milk\n");
                  break;
            case 2:
                  printf("************Potato Curry****************\n");
                  printf("******************Prepare Coconut Milk*************************\n");
                  printf("***Scrape coconut\n");
                  printf("***Mix with hot water\n");
                  printf("***************************************************************\n");
                  printf("***Wash and peel potato = 1 kg\n");
                  printf("*******************Add Spices\n");
                  printf("***Add tumeric = 0.5 t spoon\n");
                  printf("***Add pepper = 2 t spoon\n");
                  printf("***Add lemon grass\n");
                  printf("*********************************Add tomato\n");
                  printf("***Add salt = 1 t spoon\n");
                  printf("***Add water\n");
                  printf("***Cook\n");
                  printf("***Add coconut milk\n");
                  break;
            case 3:
                  printf("************Fish Curry****************\n");
                  printf("******************Prepare Coconut Milk*************************\n");
                  printf("***Scrape coconut\n");
                  printf("***Mix with hot water\n");
                  printf("***************************************************************\n");
                  printf("***Wash the fish\n");
                  printf("*******************Add Spices\n");
                  printf("***Add tumeric = 0.5 t spoon\n");
                  printf("***Add pepper = 3 t spoon\n");
                  printf("***Add lemon grass\n");
                  printf("******************************\n");
                  printf("***Add salt = 1 t spoon\n");
                  printf("***Add water\n");
                  printf("***Cook\n");
                  printf("***Add coconut milk\n");
                  break;
            case 4:
                  printf("Exit\n");
                  break;
      }

      return 0;
}

// Method 2
//Following Method is the expected code in the tutorial but if they offering extra marks you can always use the above </code> to get the same output.
#include <stdio.h>
int main()
{
    printf("************Dhal Curry****************\n");
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("***************************************************************\n");
    printf("***Wash and Drain dhal\n");
    printf("*******************Add Spices\n");
    printf("***Add tumeric = 0.1 t spoon\n");
    printf("***Add pepper = 1 t spoon\n");
    printf("***Add lemon grass\n");
    printf("***Add salt = 1 t spoon\n");
    printf("***Add water\n");
    printf("***Cook\n");
    printf("***Add coconut milk\n");
    printf("\n");
    printf("************Potato Curry****************\n");
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("***************************************************************\n");
    printf("***Wash and peel potato = 1 kg\n");
    printf("*******************Add Spices\n");
    printf("***Add tumeric = 0.5 t spoon\n");
    printf("***Add pepper = 2 t spoon\n");
    printf("***Add lemon grass\n");
    printf("*********************************Add tomato\n");
    printf("***Add salt = 1 t spoon\n");
    printf("***Add water\n");
    printf("***Cook\n");
    printf("***Add coconut milk\n");
    printf("\n");
    printf("************Fish Curry****************\n");
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("***************************************************************\n");
    printf("***Wash the fish\n");
    printf("*******************Add Spices\n");
    printf("***Add tumeric = 0.5 t spoon\n");
    printf("***Add pepper = 3 t spoon\n");
    printf("***Add lemon grass\n");
    printf("******************************\n");
    printf("***Add salt = 1 t spoon\n");
    printf("***Add water\n");
    printf("***Cook\n");
    printf("***Add coconut milk\n");
    return 0;
}