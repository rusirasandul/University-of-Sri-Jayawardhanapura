#include <stdio.h>

int main() {
    // Initial state is 0101 (binary) which is 5 in decimal
    int control_state = 5; // 0101 in binary

    // Define the mask to set the third bit (bit 2) to 1, which is 0100 in binary or 4 in decimal
    int mask = 4; // 0100 in binary

    // Set the third bit using bitwise OR
    control_state = control_state | mask;

    // Print the new control state
    printf("New control state: %d\n", control_state);

    return 0;
}
