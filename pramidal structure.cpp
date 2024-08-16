#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 0; k < 2 * i - 1; ++k) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int height;

    // Get the height of the pyramid from the user
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    // Call the function to print the pyramid
    printPyramid(height);

    return 0;
}

