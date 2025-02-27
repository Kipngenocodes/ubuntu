#include <stdio.h>

// Global variable (accessible throughout the program)
int globalVar = 100;

void scopeExample() {
    int localVar = 10; // Local variable (only accessible in this function)
    static int staticVar = 0; // Static variable (retains value between function calls)

    // Incrementing static variable
    staticVar++;

    printf("Inside scopeExample function:\n");
    printf("Local Variable: %d\n", localVar);
    printf("Static Variable: %d\n", staticVar);
    printf("Global Variable: %d\n\n", globalVar);
}

int main() {
    int localMain = 50; // Local variable for main()

    printf("Inside main function:\n");
    printf("Local Variable in main: %d\n", localMain);
    printf("Global Variable: %d\n\n", globalVar);

    // Calling the function multiple times to show static variable behavior
    scopeExample();
    scopeExample();
    scopeExample();

    return 0;
}
