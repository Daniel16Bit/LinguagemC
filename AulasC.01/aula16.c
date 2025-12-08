// #16 C Variable Scope | C Programming For Beginners

// Escopo de Variáveis sáo o contexto onde a variável é visível e pode ser acessada.
// Variáveis declaradas dentro de uma função são locais a essa função.

#include <stdio.h>

int addNumbers (int num1, int num2){

    int result = num1 + num2;
    return result;

}

int main () {

    int sum = addNumbers(5,6);
    printf("The result is: %d\n", sum); 


    return 0;
}
    
