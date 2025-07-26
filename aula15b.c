// #15 C Functions | C Programming for Beginners


#include <stdio.h>

int addNum(int a, int b); // Declaração da função

int main(){

    int result = addNum(8,9);
    printf("The result is: %d\n", result);



    return 0;
}   

int addNum(int a, int b){
    int sum = a + b;
    return sum;
    printf("Depois do return, nada é executado.\n");
}
