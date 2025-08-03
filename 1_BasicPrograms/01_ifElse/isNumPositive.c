#include <stdio.h>
#include "colours.h"

/**
 * @brief This program takes an integer input from user and checks whether it is positive, negative or zero.
 *
 * @details
 * This program uses if-else statements to check whether the given number is positive, negative or zero.
 * The program prompts the user to enter an integer and then prints whether the number is positive, negative or zero.
 */
int main() {
    int num;

    // Input a number with colored prompt
    printf(BRIGHT_CYAN "Enter a number: " RESET);
    scanf("%d", &num);

    if (num > 0) {
        printf(GREEN "The number is positive.\n");
    } else if (num < 0) {
        printf(RED "The number is negative.\n" RESET);
    } else {
        printf(LIGHT_GREEN "The number is zero.\n" RESET);
    }
    printf(RESET); // Reset color at the end
    return 0;
}