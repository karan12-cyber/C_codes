#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Declare variables
    int num1, num2;

    // Input two positive integers
    printf("Enter the first positive integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    // Find and output the GCD
    int gcd = findGCD(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}

