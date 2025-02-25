#include <stdio.h>

int main(){

    //working with constants
    const int AGE = 78;
    const char GRADE = 'D';
    const char NAME[] = "Kipngeno Alex";
    const float  PI = 3.14592266;
    const double GRAVITY = 9.81;

     // Displaying constant variables
    printf("Name: %s\n", NAME);
    printf("Age: %d\n", AGE);
    printf("Value of Pi: %.5f\n", PI);
    printf("Gravity: %.2f m/s^2\n", GRAVITY);
    printf("Grade: %c\n", GRADE);
 
     return 0;


}