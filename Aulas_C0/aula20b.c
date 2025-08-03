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
    arr [0][2] = 7; // Update the value at row 0, column 2
    arr[1][1] = 8; // Update the value at row 1, column 1

    printf("%d\n", arr[0][2]); // Imprime o terceiro elemento do primeiro array
    printf("%d\n", arr[1][1]); // Imprime o segundo elemento do segundo array

    return 0;
}