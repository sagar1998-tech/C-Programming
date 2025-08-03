#include <stdio.h>
#include "colours.h"
/**
 * @brief This program takes an integer input from user and checks whether it alphabetic, numeric or alphanumeric.
 * @details
 * This program uses if-else statements to check whether the given input is alphabetic, numeric or alphanumeric.
 * The program prompts the user to enter a input and then prints whether the input is alphabetic
 *  or numeric or alphanumeric.
 */

int main() {
    char ch;

    // Input a input with colored prompt
    printf(BRIGHT_CYAN "Enter a input: " RESET);
    scanf(" %c", &ch);

    // Check if the input is alphabetic
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf(GREEN "The input is alphabetic.\n" RESET);
    } 
    // Check if the input is numeric
    else if (ch >= '0' && ch <= '9') {
        printf(BRIGHT_BLUE "The input is numeric.\n" RESET);
    } 
    // If not alphabetic or numeric, it is alphanumeric
    else {
        printf(RED "The input '%c' is neither alphabetic nor numeric.\n" RESET, ch);
    }
    printf(RESET); // Reset color at the end
    return 0;
}