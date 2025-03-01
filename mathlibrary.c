#include <stdio.h>
#include <math.h>

int main() {
    // Variables to store results and inputs
    double x, y, result;
    int n;
    
    printf("===== C MATH LIBRARY DEMONSTRATION =====\n\n");
    
    // Basic arithmetic functions
    printf("--- BASIC ARITHMETIC FUNCTIONS ---\n");
    x = 25.0;
    result = sqrt(x);
    printf("Square root of %.1f = %.4f\n", x, result);
    
    x = 2.0;
    y = 8.0;
    result = pow(x, y);
    printf("%.1f raised to power %.1f = %.1f\n", x, y, result);
    
    x = -15.5;
    result = fabs(x);
    printf("Absolute value of %.1f = %.1f\n\n", x, result);
    
    // Exponential and logarithmic functions
    printf("--- EXPONENTIAL AND LOGARITHMIC FUNCTIONS ---\n");
    x = 2.0;
    result = exp(x);
    printf("e raised to power %.1f = %.4f\n", x, result);
    
    x = 100.0;
    result = log10(x);
    printf("Base-10 logarithm of %.1f = %.1f\n", x, result);
    
    x = 2.718281828;
    result = log(x);
    printf("Natural logarithm of %.9f ≈ %.4f\n\n", x, result);
    
    // Rounding functions
    printf("--- ROUNDING FUNCTIONS ---\n");
    x = 7.3;
    printf("Original value: %.1f\n", x);
    printf("ceil(%.1f) = %.1f (rounds up to the nearest integer)\n", x, ceil(x));
    printf("floor(%.1f) = %.1f (rounds down to the nearest integer)\n", x, floor(x));
    printf("round(%.1f) = %.1f (rounds to the nearest integer)\n\n", x, round(x));
    
    // Trigonometric functions
    printf("--- TRIGONOMETRIC FUNCTIONS ---\n");
    // Convert degrees to radians for trigonometric functions
    x = 45.0;
    double angle_in_radians = x * M_PI / 180.0;
    printf("For angle %.1f degrees (%.4f radians):\n", x, angle_in_radians);
    printf("sin(%.1f°) = %.4f\n", x, sin(angle_in_radians));
    printf("cos(%.1f°) = %.4f\n", x, cos(angle_in_radians));
    printf("tan(%.1f°) = %.4f\n\n", x, tan(angle_in_radians));
    
    // Hyperbolic functions
    printf("--- HYPERBOLIC FUNCTIONS ---\n");
    x = 1.0;
    printf("sinh(%.1f) = %.4f\n", x, sinh(x));
    printf("cosh(%.1f) = %.4f\n", x, cosh(x));
    printf("tanh(%.1f) = %.4f\n\n", x, tanh(x));
    
    // Special functions
    printf("--- SPECIAL MATHEMATICAL FUNCTIONS ---\n");
    n = 5;
    result = tgamma(n); // Gamma function (n-1)! for positive integers
    printf("Gamma(%d) = %.1f (equivalent to %d! = %d)\n", n, result, n-1, 24);
    
    x = -4.5;
    y = 7.8;
    result = fmod(y, x);
    printf("fmod(%.1f, %.1f) = %.1f (floating-point remainder)\n", y, x, result);
    
    printf("\nConstants provided by math.h:\n");
    printf("Pi (π) = %.15f\n", M_PI);
    printf("e = %.15f\n", M_E);
    
    return 0;
}