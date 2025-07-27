// #16 C Variable Scope | C Programming For Beginners
// Escopos Globais e Locais

#include <stdio.h>

int result; // Variável global;
void addNumbers (int num1, int num2){

     result = num1 + num2;
     printf("The result is: %d\n", result);
     // Variável local, só pode ser acessada dentro dessa função.

}

int main () {

    addNumbers(5,6);


    return 0;
}
   