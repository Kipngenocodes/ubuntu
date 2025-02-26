#include <stdio.h>

int main() {
    int i = 9;

    printf("Example of 'break' and 'continue' in a while loop:\n");

    while (i <= 50) {
        // Skip number 5 using continue
        if (i == 15) {
            printf("Skipping number 15 using continue\n");
            i++;  // Increment to avoid infinite loop
            continue; // Skips the rest of the loop for this iteration
        }

        // Stop the loop when i reaches 8 using break
        if (i == 18) {
            printf("Stopping loop at 18 using break\n");
            break; // Exits the loop entirely
        }

        printf("Number: %d\n", i);
        i++; // Increment counter
    }

    printf("Loop has ended.\n");

    return 0;
}
