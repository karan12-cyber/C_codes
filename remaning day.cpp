#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years
    years = days / 365;

    // Calculate remaining days after extracting years
    remainingDays = days % 365;

    // Calculate weeks from remaining days
    weeks = remainingDays / 7;

    // Calculate remaining days after extracting weeks
    remainingDays = remainingDays % 7;

    // Output the result
    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, remainingDays);

    return 0;
}

