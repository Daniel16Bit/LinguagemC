// #23 C Pointers | C Programming For Beginners
#include <stdio.h>

int main(){

    int age = 25;

    int* ptr = &age;

    *ptr = 31; // Modifying the value using pointer

    printf("%d", age); // Output the modified value

/*
Declaração de ponteiro — CORRETO
int* ptr;

Inicialização segura de ponteiro — CORRETO
int* ptr = NULL;

Inicialização apontando para variável existente — CORRETO
int age = 25;
int* ptr = &age;

int age = 25;
int* ptr = &age;

Atribuição do endereço de 'age' ao ponteiro — CORRETO
ptr = &age;

——— Exemplos INCORRETOS ———

Tentativa de atribuir valor inteiro a um ponteiro:
ptr = age;
Erro: 'age' (int) não é compatível com 'int*'. Falta o '&'.

Tentativa de atribuir endereço ao conteúdo apontado:
*ptr = &age;
Erro: '*ptr' (int) não é compatível com 'int*'.

Tentativa de atribuir a '&ptr':
&ptr = age;
Erro: '&ptr' (int**) não pode receber um 'int'.

Tentativa de atribuir outro nível de ponteiro errado:
&ptr = &age;
Erro: LHS é int**, RHS é int*. São níveis diferentes de indireção.
*/




    return 0; 
}