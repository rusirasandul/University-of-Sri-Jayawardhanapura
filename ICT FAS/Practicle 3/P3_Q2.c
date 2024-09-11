/*2. Print your name, address and telephone number in separate lines. Separate each of the 
data by using an empty new line.  
a. Print your first and last name by using the following escape characters as the word 
separator. (ex. Donald\bTrump)  
• \b  
• \f  
• \n  
• \r  
• \t  
• \a */

#include <stdio.h>
int main (){
      printf("Name: John\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      printf("\n");
      printf("Name: John\bDoe\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      printf("\n");
      printf("Name: John\fDoe\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      printf("\n");
      printf("Name: John\nDoe\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      printf("\n");
      printf("Name: John\rDoe\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      printf("\n");
      printf("Name: John\tDoe\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      printf("\n");
      printf("Name: John\aDoe\n"
      "Address: 1234, 5th Street, Colombo 05\n"
      "Telephone: 011-1234567\n");
      return 0;
}