
#include <stdio.h>
#include "colours.h"

/**
 * @brief This program checks if a person is eligible to vote based on age
 * and citizenship.
 * Highlighted colors are used for better visibility.
 * @details
 * The program prompts the user to enter their age and citizenship status.
 * It checks if the user is an Indian citizen and if their age is 18 or above.
 * If both conditions are met, it prints that the user is eligible to vote.
 * Otherwise, it informs the user that they are not eligible to vote.
 */

int main() {
    int age, gender;
    char isCitizen;
    printf(BRIGHT_CYAN "Are you an Indian citizen? (Y/N): " RESET);
    // Input citizenship status
    scanf(" %c", &isCitizen);
    if (isCitizen == 'Y' || isCitizen == 'y') {
        printf(BRIGHT_CYAN "Please select gender:\n" RESET);
        printf("1. Male\n2. Female\n3. Other\n");
        scanf("%d", &gender);
        if(gender < 1 || gender > 3 )
        {
            printf(RED "Invalid Option Selected.\n" RESET);
            return 1;
        }
        printf(BRIGHT_CYAN "Enter your age: " RESET);
        // Input age
        scanf("%d", &age);
        if(age < 0) {
            printf(RED "Age cannot be negative. Please enter a valid age.\n" RESET);
            return 1;
        }else {
            printf(BRIGHT_CYAN "You entered age: %d\n" RESET, age);
            // Check voting eligibility
            if(age >= 18) {
                printf(GREEN "You are eligible to vote.\n" RESET);
            } else {
                printf(RED "You are not eligible to vote as you are under 18 years old.\n" RESET);
            }
        }
    } else {
        printf(RED "You are not an Indian citizen, hence not eligible to vote.\n" RESET);
        printf(BRIGHT_YELLOW "Please check your citizenship status.\n" RESET);
    }
    printf(RESET); // Reset color at the end
    return 0;
}

    

    