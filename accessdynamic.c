
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 4 integers
    int *ptr = calloc(4, sizeof(*ptr));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Write to the memory
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;  // Initialize ptr[3] to avoid undefined behavior

    // Read from the memory
    printf("%d\n", ptr[0]); // Output: 2
    printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]); // Output: 4 6 8

    // Free allocated memory
    free(ptr);

    return 0;
}
