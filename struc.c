#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    struct myStructure s1;
    
    // Assign values
    s1.myNum = 42;
    s1.myLetter = 'A';
    strcpy(s1.myString, "Some text");
    
    // Print values
    printf("My string: %s\n", s1.myString);
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    
    return 0;
}