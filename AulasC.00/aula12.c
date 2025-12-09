// #12: while Loop in C Programming | C Programming for Beginners

#include <stdio.h>

int main (){

/*
        while (condição) {
             bloco de código dentro do loop
        }
*/

 while (1<5) {
    printf("1 é menor que 5\n");
    // A condição é sempre verdadeira, então isso criará um loop infinito.
    // Para evitar isso, você pode usar uma condição que eventualmente se torne falsa.
    // Por exemplo, você pode usar uma variável de controle:
    
    /* -- EXEMPLO DE QUEBRA DE LOOP */
    static int contador = 0;
    contador++;
    
    if (contador >= 5) {
        break; // Sai do loop quando contador atinge 5

 }


// OU ALGO MAIS SIMPLES COMO:

int contador = 1;

while(contador <= 5){
    printf("Contador: %d\n", contador);
    contador++; // Incrementa o contador para evitar loop infinito


}

    return 0;
}