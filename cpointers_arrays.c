#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50}; // Array declaration
    int *ptr = numbers; // Pointer to first element of array
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size

    // Display array elements using array indexing
    printf("Array elements using indexing:\n");
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Display array elements using pointers
    printf("\nArray elements using pointers:\n");
    for (int i = 0; i < size; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i)); // Accessing using pointer arithmetic
    }

    return 0;
}
