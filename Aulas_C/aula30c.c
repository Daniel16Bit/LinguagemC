// #30: Preprocesor and Macros | C Programming for Beginners

#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define circleArea(r) (PI * (r) * (r))

int main(){

    double radius = 12.4;
    double area = circleArea(radius);
    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);

    printf("The value of PI is approximately %.5f\n", PI);

    return 0;
}