#include <stdio.h>
#include <string.h>

int searchSubstring(const char *mainString, const char *substring) {
    int mainLen = strlen(mainString);
    int subLen = strlen(substring);
    int i = 0

    for ( i <= mainLen - subLen; i++;) {
        int j;

        // Check if the substring matches starting from index i
        for (j = 0; j < subLen; j++) {
            if (mainString[i + j] != substring[j]) {
                break;
            }
        }

        // If the inner loop completed without a break, substring is found
        if (j == subLen) {
            return i;  // Return the starting index of the substring
        }
    }

    return -1;  // Return -1 if substring is not found
}

int main() {
    const char mainString[] = "Hello, this is a sample string.";
    const char substring[] = "sample";

    int index = searchSubstring(mainString, substring);

    if (index != -1) {
        printf("Substring found at index %d\n", index);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}

