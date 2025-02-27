#include <stdio.h>

int main() {
    int age;
    float salary;
    char gender;
    char name[50];

    // Taking input for an integer
    printf("Enter your age: ");
    scanf("%d", &age);

    // Taking input for a float
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Taking input for a character
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);  // Notice the space before %c to avoid newline issues

    // Taking input for a string (single word)
    printf("Enter your first name: ");
    scanf("%s", name);

    // Displaying user input
    printf("\n--- User Information ---\n");
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Gender: %c\n", gender);
    printf("Name: %s\n", name);

    return 0;
}
