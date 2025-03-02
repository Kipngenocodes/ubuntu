#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, size;

    // Allocate memory for four integers
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    if (ptr1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit program
    }

    printf("%d bytes allocated at address %p\n", size, ptr1);

    // Resize the memory to hold six integers
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    if (ptr2 == NULL) {
        printf("Memory reallocation failed! Keeping original pointer.\n");
        free(ptr1); // Free original memory before exiting
        return 1;
    }

    printf("%d bytes reallocated at address %p\n", size, ptr2);

    // Free allocated memory
    free(ptr2);

    return 0;
}
