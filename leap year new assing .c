#include <stdio.h>

int main() {
    int year;
    char choice;

    do {
        // Get user input
        printf("Enter a year: ");
        scanf("%d", &year);

        // Check if it's a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }

        // Ask user if they want to continue
        printf("Do you want to check another year? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program terminated. Goodbye!\n");

    return 0;
}

