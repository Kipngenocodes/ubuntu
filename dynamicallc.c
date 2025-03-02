#include <stdio.h>
#include <stdlib.h>

int main() {
    int *students;
    int numStudents = 12;

    students = calloc(numStudents, sizeof(*students));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use %lu for size_t (long unsigned int)
    printf("%lu\n", (unsigned long)(numStudents * sizeof(*students))); // 48 bytes

    free(students); // Free allocated memory

    return 0;
}
