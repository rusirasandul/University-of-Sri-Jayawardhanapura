#include <stdio.h>    // Includes the standard input/output library.

int main(void) {      // Main function where the program execution begins.
    int number;       // Declares an integer variable 'number'.
    
    printf("Enter a number: ");   // Prompts the user to enter a number.
    
    scanf("%d", &number);  // Reads the user's input and stores it in 'number'.
    
    printf("You entered: %d\n", number);  // Prints the value stored in 'number'.
    
    return 0;  // Returns 0 to indicate successful completion of the program.
}
