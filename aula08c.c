// #8: Boolean and Comparison Operators in C Programming

#include <stdio.h>
#include <stdbool.h>

// OPERADORES LOGICOS
// AND (&&), OR (||), NOT (!)

int main () {

    bool a = true;
    bool b = false;

    // AND (&&) // Retorna true se ambos forem true
    bool c = a && b; // false
    printf("A && B: %d\n", c);

    // OR (||) // Retorna true se pelo menos um for true
    bool d = a || b; // true
    printf("A || B: %d\n", d);

    // NOT (!) // Inverte o valor booleano
    // Se for true, torna-se false e vice-versa
    bool e = !a; // false
    printf("!A: %d\n", e);

    return 0;
}