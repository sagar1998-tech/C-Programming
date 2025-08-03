#include <stdio.h>
#include "colours.h"

/**
 * @brief This program checks if a year is leap year or not.
 * @details
 * A year is a leap year if it is divisible by 4, except for end-of-century years.
 * However, those end-of-century years are not leap years unless they are divisible by 400.
 * This program prompts the user to enter a year and checks if it is a leap year.   
 * It uses if-else statements to determine the leap year status and prints the result in colored text.
 */

 int main() {
    int year;

    // Input a year
    printf(BRIGHT_CYAN "Enter a year: " RESET);
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf(GREEN "The year %d is a leap year.\n" RESET, year);
    } else {
        printf(RED "The year %d is not a leap year.\n" RESET, year);
    }

    return 0;
}