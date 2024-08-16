#include <stdio.h>

// Function to find the greatest common divisor (GCD) using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the least common multiple (LCM)
int findLCM(int num1, int num2) {
    // LCM * GCD = num1 * num2
    // Therefore, LCM = (num1 * num2) / GCD
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    // Input two positive integers
    printf("Enter first positive integer: ");
    scanf("%d", &num1);
    printf("Enter second positive integer: ");
    scanf("%d", &num2);

    // Check if the inputs are positive
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; // Exit with an error code
    }

    // Find and display the LCM
    int lcm = findLCM(num1, num2);
    printf("The least common multiple of %d and %d is: %d\n", num1, num2, lcm);

    return 0; // Exit successfully
}

