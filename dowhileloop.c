#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\nCollege Application System:\n");
        printf("1. Apply for Admission\n");
        printf("2. Check Application Status\n");
        printf("3. View Available Courses\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected to apply for admission.\n");
                break;
            case 2:
                printf("Enter your application ID to check status.\n");
                break;
            case 3:
                printf("Courses: CS, Engineering, Medicine, Business.\n");
                break;
            case 4:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4); // Loop until the user chooses to exit

    return 0;
}
