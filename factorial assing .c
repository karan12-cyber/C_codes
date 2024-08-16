#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to check if a number is a Strong number
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int N;

    // Input
    printf("Enter a number: ");
    scanf("%d", &N);

    // Check if the number is a Strong number
    if (isStrongNumber(N)) {
        printf("%d is a Strong number.\n", N);
    } else {
        printf("%d is not a Strong number.\n", N);
    }

    return 0;
}

