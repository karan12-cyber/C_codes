#include <stdio.h>

int main() {
    char ch;

    // Input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print ASCII value
    printf("ASCII value of %c is %d\n", ch, ch);

    return 0;
}
