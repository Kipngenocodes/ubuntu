#include <stdio.h>

int main() {
    int a = 10, b = 5;
    float x = 10.5, y = 2.5;
    
    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division (integer)
    printf("a %% b = %d\n", a % b); // Modulus (remainder)
    printf("x / y = %.2f\n\n", x / y); // Floating-point division

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b: %d\n", a > b);  // Greater than
    printf("a < b: %d\n", a < b);  // Less than
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n\n", a != b); // Not equal to

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 5 && b < 10): %d\n", (a > 5 && b < 10)); // AND
    printf("(a > 5 || b > 10): %d\n", (a > 5 || b > 10)); // OR
    printf("!(a > b): %d\n\n", !(a > b)); // NOT

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b); // Bitwise AND
    printf("a | b = %d\n", a | b); // Bitwise OR
    printf("a ^ b = %d\n", a ^ b); // Bitwise XOR
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n\n", a >> 1); // Right shift

    // Assignment Operators
    printf("Assignment Operators:\n");
    a += b; // Equivalent to a = a + b
    printf("a += b: %d\n", a);
    a -= b;
    printf("a -= b: %d\n", a);
    a *= b;
    printf("a *= b: %d\n", a);
    a /= b;
    printf("a /= b: %d\n", a);
    a %= b;
    printf("a %%= b: %d\n\n", a);

    // Increment & Decrement Operators
    printf("Increment and Decrement:\n");
    printf("++a = %d\n", ++a); // Pre-increment
    printf("a++ = %d\n", a++); // Post-increment
    printf("Now a = %d\n", a);
    printf("--b = %d\n", --b); // Pre-decrement
    printf("b-- = %d\n", b--); // Post-decrement
    printf("Now b = %d\n", b);

    return 0;
}
