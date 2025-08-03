#include <stdio.h>
#include "colours.h"

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find and print the maximum number
    if (num1 > num2) {
        printf(BRIGHT_GREEN "The maximum number is: %d\n" RESET, num1);
    } else if (num2 > num1) {
        printf(BRIGHT_GREEN "The maximum number is: %d\n" RESET, num2);
    } else {
        printf(BRIGHT_YELLOW "Both numbers are equal: %d\n" RESET, num1);
    }

    return 0;
}