#include <stdio.h>

int main() {
    int choice;

    // Display menu options
    printf("Welcome to the College Application System!\n");
    printf("Select an option:\n");
    printf("1. Apply for Admission\n");
    printf("2. Check Application Status\n");
    printf("3. View Available Courses\n");
    printf("4. Contact Admissions Office\n");
    printf("5. Exit\n");

    // Get user choice
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Switch case to handle different options
    switch (choice) {
        case 1:
            printf("You have selected to apply for admission.\n");
            printf("Please fill out the online application form on our website.\n");
            break;
        
        case 2:
            printf("You have selected to check your application status.\n");
            printf("Enter your application ID to proceed.\n");
            break;
        
        case 3:
            printf("Available Courses:\n");
            printf("1. Computer Science\n");
            printf("2. Engineering\n");
            printf("3. Business Administration\n");
            printf("4. Medicine\n");
            break;
        
        case 4:
            printf("Contact Admissions Office:\n");
            printf("Email: admissions@college.edu\n");
            printf("Phone: +1 (555) 123-4567\n");
            break;
        
        case 5:
            printf("Exiting the system. Thank you for using the College Application System!\n");
            break;
        
        default:
            printf("Invalid choice! Please select a valid option (1-5).\n");
    }

    return 0;
}
