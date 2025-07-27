// #17 C Standard Library Functions | C Programming For Beginners

#include <stdio.h> // Include the standard input/output library
#include <math.h> // Include the math library for mathematical functions

int main() {
    // Print a message to the console
    printf("Hello, World!\n");

    // Calculate the square root of 16 using the sqrt function from the math library
    double result = sqrt(16.0);
    printf("The square root of 16 is: %.2f\n", result);

    int num = cbrt(27.0); // Calculate the cube root of 27
    printf("The cube root of 27 is: %d\n", num);

    int a,b;

    double pow(a, b); // Calculate a raised to the power of b (note: a and b need to be defined)

    printf("Enter two numbers (base and exponent): ");
    scanf("%d %d", &a, &b); // Read two integers from user input
    
    double power = pow(a, b); // Calculate a raised to the power of b
    printf("%d raised to the power of %d is: %.2f\n", a, b, power);


    // Return 0 to indicate successful execution
    return 0;
}