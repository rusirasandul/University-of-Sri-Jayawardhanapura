#include <stdio.h>

int main() {
    float Num1, Num2, sum, sub, mul, div ;
    int mod, choice, continue_choice;

    // User inputs
    printf("Enter the first number: ");
    scanf("%f", &Num1);
    printf("Enter the second number: ");
    scanf("%f", &Num2);

    do {
        // User choice
        printf("\nPlease select the operation you want to perform: \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        // Perform the operation
        switch (choice) {
            case 1:
                sum = Num1 + Num2;
                printf("The Sum of the two numbers you entered is: %.2f\n", sum);
                break;
            case 2:
                sub = Num1 - Num2;
                printf("The Subtraction of the two numbers you entered is: %.2f\n", sub);
                break;
            case 3:
                mul = Num1 * Num2;
                printf("The Multiplication of the two numbers you entered is: %.2f\n", mul);
                break;
            case 4:
                if (Num2 != 0) {
                    div = Num1 / Num2;
                    printf("The Division of the two numbers you entered is: %.2f\n", div);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if ((int)Num2 != 0) {
                    mod = (int)Num1 % (int)Num2;
                    printf("The Modulus of the two numbers you entered is: %d\n", mod);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }

        // Ask the user if they want to perform another calculation
        printf("\nDo you want to perform another calculation?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &continue_choice);
        
    } while (continue_choice == 1);

    printf("Thank you for using the program!\n");
    return 0;
}
