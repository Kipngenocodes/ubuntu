#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Asking for user input
    printf("Enter first number: ");
    scanf("%lf", &num1); // Reads a floating-point number

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Reads the operator (space before %c to ignore whitespace)

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
