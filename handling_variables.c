#include <stdio.h>

int main() {
    // Integer variable
    int age = 25;

    // Floating point variable
    float height = 5.9;

    // Double precision floating point variable
    double weight = 72.5;

    // Character variable
    char grade = 'A';

    // String (character array)
    char name[] = "Kipcode";

    // Boolean (using stdbool.h)
    #include <stdbool.h>
    bool isStudent = true;

    // Printing variables
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Weight: %.2f kg\n", weight);
    printf("Grade: %c\n", grade);
    printf("Is Student: %s\n", isStudent ? "True" : "False");

    return 0;
}
