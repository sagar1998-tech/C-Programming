#include <stdio.h>
// #include "D:\Sagar_WorkSpace\C_Programs\C-Programming\GenericLib\colours.h"
#include "colours.h"

/* Added Some colors in Printf*/
// This program checks if a number is even or odd
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf(BRIGHT_GREEN "The number %d is even.\n" RESET, num);
    } else {
        printf(BRIGHT_RED "The number %d is odd.\n" RESET, num);
    }

    return 0;
}
