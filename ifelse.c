#include <stdio.h>

int main() {
    int number;

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // If-Else-If Ladder
    if (number > 0) {
        printf("The number is positive.\n");
    } 
    else if (number < 0) {
        printf("The number is negative.\n");
    } 
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
