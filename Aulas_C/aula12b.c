// #12: while Loop in C Programming | C Programming for Beginners

#include <stdio.h>

int main() {

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int contador = 1;

    while (contador <= 10) {
        int prod = num * contador;
        printf("%d * %d = %d\n", num, contador, prod);
        contador++;
    }

    return 0;
}