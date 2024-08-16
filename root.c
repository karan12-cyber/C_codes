#include <stdio.h>
#include <math.h>

// Function to calculate roots of the quadratic equation
void calculateRoots(float a, float b, float c) {
    // Calculate the discriminant
    float discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Real and different roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and same roots
        float root = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2f\n", root);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);

        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    // Get coefficients from the user
    float a, b, c;
    printf("Enter coefficients (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Call the function to calculate roots
    calculateRoots(a, b, c);

    return 0;
}

