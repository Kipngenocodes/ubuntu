#include <stdio.h>

int main() {
    int students[20];

    // Calculate size of the array in bytes
    printf("Size of students array: %lu bytes\n", sizeof(students));

    // Calculate number of elements
    printf("Number of elements in the array: %lu\n", sizeof(students) / sizeof(students[0]));

    return 0;
}
