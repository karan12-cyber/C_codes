#include <stdio.h>

// Function to calculate late fee
int calculateLateFee(char type, int daysLate) {
    int lateFee = 0;

    // Check the type of book and calculate late fee accordingly
    switch(type) {
        case 'A':
            if (daysLate <= 7) {
                lateFee = 0;  // No late fees
            } else if (daysLate >= 8 && daysLate <= 10) {
                lateFee = 2 * (daysLate - 7);  // Rs. 2 per day
            } else {
                lateFee = 5 * (daysLate - 10) + 6;  // Rs. 5 per day after 10 days
            }
            break;

        case 'B':
            if (daysLate <= 5) {
                lateFee = 0;  // No late fees
            } else if (daysLate >= 6 && daysLate <= 10) {
                lateFee = 5 * (daysLate - 5);  // Rs. 5 per day
            } else {
                lateFee = 10 * (daysLate - 10) + 20;  // Rs. 10 per day after 10 days
            }
            break;

        default:
            printf("Invalid book type!\n");
            break;
    }

    return lateFee;
}

int main() {
    char bookType;
    int daysLate;

    // Get input from the user
    printf("Enter the type of book (A/B): ");
    scanf(" %c", &bookType);

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    // Calculate and display the late fee
    int lateFee = calculateLateFee(bookType, daysLate);
    printf("Late Fee: Rs. %d\n", lateFee);

    return 0;
}

