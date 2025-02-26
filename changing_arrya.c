#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Changing array elements
    numbers[1] = 25; // Changing the second element
    numbers[3] = 45; // Changing the fourth element

    printf("Updated Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
