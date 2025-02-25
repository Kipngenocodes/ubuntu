#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Get user input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i; // Add i to sum
        i++;      // Increment i
    }

    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}
