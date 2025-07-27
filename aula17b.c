// #17 C Standard Library Functions | C Programming For Beginners

#include <stdio.h> // Include the standard input/output library
#include <math.h> // Include the math library for mathematical functions
#include <ctype.h> // Include the ctype library for character handling functions


int main() {
    
    char a = 'e';
    char upper = toupper(a);
    printf("Uppercase: %c\n", upper);

    char b = 'G';
    char lower = tolower(b);
    printf("Lowercase: %c\n", lower);

    
    
    return 0;
}