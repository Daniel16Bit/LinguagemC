// #30: Preprocesor and Macros | C Programming for Beginners

#include <stdio.h>
#include <math.h>

#define PI 3.14159


int main(){

    double radius = 12.4;
    double area = PI * radius * radius;
    printf("The area of a circle with radius %.2f is %.2f\n");



    printf("The value of PI is approximately %.5f\n", PI);

    return 0;
}