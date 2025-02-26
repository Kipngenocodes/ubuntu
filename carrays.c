#include <stdio.h>

int main() {
    // Declare and initialize an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}

