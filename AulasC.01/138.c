
/*
 ==========================================================================================================================================================================
 | Significado               | Tipo VisualG | Tipo C    | Valor padrão                    | Observação                                                                    |
 |===========================|==============|===========|=================================|===============================================================================|
 | número inteiro            | inteiro      | int       | não atribuído (lixo de memória) | int: -32767 a 32767                                                           |
 |                           |              |           |                                 | long int: -2147483648 a 2147483647                                            |
 |                           |              |           |                                 | long long int: -9223372036854775807 a 9223372036854775807                     |
 |---------------------------|--------------|-----------|---------------------------------|-------------------------------------------------------------------------------|
 | número de ponto flutuante | real         | double    | não atribuído (lixo de memória) | float: precisão simples                                                       |
 |                           |              |           |                                 | double: precisão dupla                                                        |
 |---------------------------|--------------|-----------|---------------------------------|-------------------------------------------------------------------------------|
 | um único caractere        | caractere    | char      | não atribuído (lixo de memória) | Na linguagem C, para se representar um único caractere usa-se o tipo char.    |
 |                           |              |           |                                 | Valores literais devem ter aspas simples. Exemplo: 'F'                        |
 |---------------------------|--------------|-----------|---------------------------------|-------------------------------------------------------------------------------|
 | texto                     | caractere    | char[ ]   | não atribuído (lixo de memória) | Na linguagem C, para se representar um texto, usa-se um vetor de char.        |
 |                           |              |           |                                 | Valores literais devem ter aspas duplas. Exemplo: "Maria"                     |
 |---------------------------|--------------|-----------|---------------------------------|-------------------------------------------------------------------------------|
 | valor lógico              | logico       | int       | não atribuído (lixo de memória) | Na linguagem C, o valor falso é representado pelo número 0, e o valor         |
 |                           |              |           |                                 | verdadeiro é representado por um número diferente de 0.                       |
 ==========================================================================================================================================================================
*/


#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    float salario, altura;
    char genero;
    char nome[50];


    idade = 22;
    salario = 2200.00;
    altura = 1.75;
    genero = "M";
    strcpy(nome, "Marcos Daniel");

    
    printf("Idade = %d\n", idade);
    printf("Salario %.2lf\n", salario);
    printf("Altura %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);



    return 0;

}
