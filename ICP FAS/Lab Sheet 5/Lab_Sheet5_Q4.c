#include <stdio.h>
const float Tax = 0.08;
const float discount = 0.1;

int main(){
     int  Product_Price, Product_Price_After_Discount, Product_Price_After_Tax ;
     double discount_Value, Tax_Value; 

     printf("Enter the Product Price: ");
     scanf("%d" ,&Product_Price );
     

     discount_Value = Product_Price * discount;
     Product_Price_After_Discount = Product_Price - discount_Value;
     Tax_Value = Product_Price * Tax;
     Product_Price_After_Tax = Product_Price_After_Discount + Tax_Value;

     printf("Your Product Price is %d \n" , Product_Price);
     printf("Discount: %f\n", discount_Value);
     printf("After Discount: %d\n", Product_Price_After_Discount);
     printf("Tax: %f\n", Tax_Value);
     printf("After Adding tAx: %d\n", Product_Price_After_Tax);

      return 0;

}