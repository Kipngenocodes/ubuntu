#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // Store user input in array
    }

    printf("These are arrays which you have entered to numberline\n");
    for (int i = 0; i < 5; i++) {
        printf("%d \n", arr[i]); // Print array values
    }

    return 0;
}
