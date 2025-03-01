#include <stdio.h>
#include <limits.h>

// Recursive function to calculate factorial using unsigned long long for larger numbers
unsigned long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Warning: Factorial of %d is too large for even unsigned long long (max supported is 20).\n", num);
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }
    
    return 0;
}