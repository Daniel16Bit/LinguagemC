// #10: Ternary Operator in C | C Programming for Beginners

#include <stdio.h>

int main(){

    int num = 10;

    // Operador ternário: condição ? valor_se_verdadeiro : valor_se_falso
    // Exemplo: // Vendo de num é igual a 0

    int result = (num == 0) ? 1 : 0; 

    printf("Resultado: %d\n", result);
    // Se num for igual a 0, result será 1, caso contrário, será 0

    return 0;
}