// #20 C Multidimensional Arrays | C Programming For Beginners

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#define ROWS 3
#define COLS 4

int main(){

    int arr[2][3] = { {1,3,4}, {2,4,6}};
    arr [0][0]; // O PRIMEIRO ZERO REPRESENTA O BREKT COM 1,3 E 4
    arr[1][2]; // O SEGUNDO ZERO REPRESENTA O BREKT COM 2,4 E 6

    printf("%d\n", arr[0][0]); // Imprime o primeiro elemento do primeiro array
    printf("%d\n", arr[1][2]); // Imprime o terceiro elemento do segundo array

    

    return 0;
}