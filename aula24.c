// #24 C Pointers and Arrays | C Programming For Beginners

#include <stdio.h>

int main(){

    int number[5] = {10, 20, 30, 40, 50};

    *number = 2;
    *(number + 4) = 11;

    printf("First element: %d\n", *number);
    printf("Last element: %d\n", *(number + 4));


    return 0;
} 