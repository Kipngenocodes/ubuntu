#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {  // Outer loop (rows)
        for (int j = i; j < rows; j++) {  // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  // Print stars
            printf("*");
        }
        printf("\n");  // Move to next line
    }
    return 0;
}
