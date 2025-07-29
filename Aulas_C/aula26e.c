// #26 C Struct | C Programming for Beginners

#include <stdio.h>

// Declaração da struct (fora da main)
typedef struct Complex {
    double real;
    double imag;
} Complex;

int main() {

    Complex c1 = {.real = 21.87, .imag = 30};
    Complex c2 = {.real = 13.34, .imag = 112.23};

    Complex sum;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Soma: %.2f + %.2fi\n", sum.real, sum.imag);
    
    return 0;
}
