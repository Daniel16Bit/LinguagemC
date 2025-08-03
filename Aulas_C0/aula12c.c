// #12: while Loop in C Programming | C Programming for Beginners

#include <stdio.h>

int main(){

    /* do...while loop in C programming
       The do...while loop is similar to the while loop, but it guarantees that the loop body will be executed at least once.
       The syntax is:


       do {
            code to be executed
       } while (condition);
    */

    int cont = 1;

    do{
        printf("Contador: %d\n", cont); // Exibe o valor do contador
        cont++; // Incrementa o contador


    }while(cont < 5); // A condição é verificada após a execução do bloco


    return 0;

}