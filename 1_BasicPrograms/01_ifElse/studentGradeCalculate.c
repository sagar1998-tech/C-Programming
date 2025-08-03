#include <stdio.h>
#include "colours.h"

/**
 * @brief This program checks if a student's grade based on their marks.
 * @details
 * The program prompts the user to enter their marks and then determines the grade
 * based on the following criteria:
 * - Marks >= 90: Grade A
 * - Marks >= 80: Grade B
 * - Marks >= 70: Grade C
 * - Marks >= 60: Grade D
 * - Marks < 60: Grade F
 * It uses if-else statements to determine the grade and prints the result in colored text.
 */

 int main(){
    int marks;

    // Input marks
    printf(BRIGHT_CYAN "Enter your marks: " RESET);
    scanf("%d", &marks);

    // Determine and print the grade
    if (marks >= 90) {
        printf(GREEN "Grade A\n" RESET);
    } else if (marks >= 80) {
        printf(BRIGHT_GREEN "Grade B\n" RESET);
    } else if (marks >= 70) {
        printf(BRIGHT_YELLOW "Grade C\n" RESET);
    } else if (marks >= 60) {
        printf(BRIGHT_BLUE "Grade D\n" RESET);
    } else {
        printf(RED "Grade F\n" RESET);
    }

    printf(RESET); // Reset color at the end

    return 0;
 }