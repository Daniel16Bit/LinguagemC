// #30: Preprocesor and Macros | C Programming for Beginners

#include <stdio.h>
#include <math.h>

#define PI 3.14159


int main(){

    int num = 36;
    int cube_root = cbrt(num);
    printf("The cube root of %d is %d\n", num, cube_root);

    return 0;
}