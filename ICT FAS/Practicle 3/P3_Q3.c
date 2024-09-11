#include <stdio.h>
#include <string.h>

int main() {
    char firstName[] = "Your First Name";
    char middleName[] = "Your Middle Name";
    char lastName[] = "Your Last Name";

    // Determine the maximum length of the names
    int maxLength = strlen(firstName);
    if (strlen(middleName) > maxLength) maxLength = strlen(middleName);
    if (strlen(lastName) > maxLength) maxLength = strlen(lastName);

    // Calculate the width of the frame
    int width = maxLength + 6;  // 6 = 2 spaces + 2 vertical bars + 2 more spaces

    // Print the top border
    for (int i = 0; i < width; i++) {
        printf("*");
    }
    printf("\n");

    // Print the first name
    printf("*  %-*s  *\n", maxLength, firstName);

    // Print the middle name
    printf("*  %-*s  *\n", maxLength, middleName);

    // Print the last name
    printf("*  %-*s  *\n", maxLength, lastName);

    // Print the bottom border
    for (int i = 0; i < width; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
