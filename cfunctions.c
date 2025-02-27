#include <stdio.h>

// Function to ask for the user's name and store it
void person_name(char name[]) {
    printf("Please enter your name: ");
    scanf("%s", name);  // Read user input (single word)
}

// Function that calls another function and greets the user
void welcome_user() {
    char name[50];  // Array to store the name
    person_name(name);  // Get the user's name

    // Greet the user
    printf("Welcome, %s! Nice to meet you.\n", name);
}

int main() {
    // Calling the function which calls another function
    welcome_user();
    return 0;
}
