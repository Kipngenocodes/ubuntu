#include <stdio.h>

int main() {
    int num = 25;
    float salary = 45000.75;
    char letter = 'A';

    // Displaying values and their memory addresses
    printf("Value of num: %d, Memory Address: %p\n", num, (void*)&num);
    printf("Value of salary: %.2f, Memory Address: %p\n", salary, (void*)&salary);
    printf("Value of letter: %c, Memory Address: %p\n", letter, (void*)&letter);

    return 0;
}
