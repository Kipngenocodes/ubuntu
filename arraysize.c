#include <stdio.h>

int main() {
    // Define an array
    int numbers[] = {10, 20, 30, 40, 50};

    // Calculate size and length
    int size_in_bytes = sizeof(numbers);
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Display array elements
    printf("Array Elements: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }

    // Display size and length
    printf("\nSize of array: %d bytes\n", size_in_bytes);
    printf("Length of array: %d elements\n", length);

    return 0;
}
