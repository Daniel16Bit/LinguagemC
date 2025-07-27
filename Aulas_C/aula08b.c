// #8: Boolean and Comparison Operators in C Programming

#include <stdio.h> 
#include <stdbool.h>

int main(){

/* Valores de comparação

> Maior que
< Meno que
>= Maior ou igual a
<= Menor ou igual a
== Igual a
!= Diferente de

*/

bool value = (1 > 2);

printf("valor: %d\n", value);

// Eles seguem a mesma lógica de true e false
// true = 01 / 1
// false = 00 / 0
// Então, o valor de 'value' será 0, pois 1 não é maior que 2.

    return 0;
}