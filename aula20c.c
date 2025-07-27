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

    for (int i = 0; i < 2; i++){

        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]); // Print each element in the array
        }
        printf("\n"); // Newline after each row
    }
    
    return 0;
}