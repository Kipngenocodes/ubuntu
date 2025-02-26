#include <stdio.h>

int main() {
    printf("Displaying of 'break' and 'continue' in a loop:\n");

    for (int i = 1; i <= 10; i++) {
        // Skip number 5 using continue
        if (i == 5) {
            printf("Skipping number 5 using continue\n");
            continue; // Skips the rest of the loop for this iteration
        }

        // Stop the loop when i reaches 8 using break
        if (i == 8) {
            printf("Stopping loop at 8 using break\n");
            break; // Exits the loop entirely
        }

        printf("Number: %d\n", i);
    }

    printf("Loop has ended.\n");

    return 0;
}
