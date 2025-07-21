// #4: Get User Input in C Programming

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8"); // necessario usar VIRGULA ao inves de PONTO, pois este metodo usa a configuracao regional do sistema para BRASIL 

    //     int age;
    // printf("Favor, coloque sua idade: ");
    // scanf("%d", &age);
    // printf("Sua idade é: %d\n", age);

    double numero;
    char alfabeto;
    
    printf("Favor, coloque inputs validos (numeros e char): ");
    scanf("%lf %c", &numero, &alfabeto);
 

    printf("\nnumero é: %lf", numero);
    printf("\nalfabeto é: %c", alfabeto);
    

    return 0;
}