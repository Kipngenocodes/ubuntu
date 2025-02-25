#include <stdio.h>

int main() {
    // Declaring constant variables
    const int age = 25;           // Integer constant
    const float pi = 3.14159;     // Floating-point constant
    const double gravity = 9.81;  // Double precision constant
    const char grade = 'A';       // Character constant
    const char name[] = "Kipcode"; // String constant

    // Displaying constant variables
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Value of Pi: %.5f\n", pi);
    printf("Gravity: %.2f m/s^2\n", gravity);
    printf("Grade: %c\n", grade);

    return 0;
}
