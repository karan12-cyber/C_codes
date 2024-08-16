#include <stdio.h>

int main() {
    int firstTerm, commonDifference, numTerms;

    // Input the first term, common difference, and the number of terms
    printf("Enter the first term: ");
    scanf("%d", &firstTerm);

    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    // Calculate and display the AP series
    printf("Arithmetic Progression Series: ");
    for (int i = 0; i < numTerms; ++i) {
        printf("%d ", firstTerm + i * commonDifference);
    }

    // Calculate and display the sum of the AP series
    int sum = (numTerms * (2 * firstTerm + (numTerms - 1) * commonDifference)) / 2;
    printf("\nSum of the Arithmetic Progression Series: %d\n", sum);

    return 0;
}

