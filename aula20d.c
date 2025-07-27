// #20 C Multidimensional Arrays | C Programming For Beginners
// EXECUTANDO O ERRO "OUT-OF-BOUNDS" COM A MATRIZ

#include <stdio.h>

int main() {
    int arr[2][4] = { {3, 6, 9, 12}, {2, 4, 6, 8} };

    // Acesso válido
    printf("Valor válido arr[0][3]: %d\n", arr[0][3]);

    // Acesso inválido (fora dos limites)
    printf("Acesso inválido arr[1][4]: %d\n", arr[1][4]); // Comportamento indefinido

    return 0;
}