#include <stdio.h>

// Function declarations (prototypes)
void greet(); // Function with no parameters
void displayNumber(int num); // Function with parameters
int addNumbers(int a, int b); // Function that returns a value

int main() {
    // Function call (No parameters)
    greet();

    // Function call (Passing an integer)
    displayNumber(25);

    // Function call (Passing two integers and getting a return value)
    int sum = addNumbers(10, 20);
    printf("Sum of 10 and 20 is: %d\n", sum);

    return 0;
}

// Function Definitions
void greet() {
    printf("Hello! Welcome to C programming functions.\n");
}

void displayNumber(int num) {
    printf("The number you entered is: %d\n", num);
}

int addNumbers(int a, int b) {
    return a + b;
}
