// #11: Switch Statement in C | C Programming for Beginners

#include <stdio.h>

int main() {


// switch (expression) {
//     case constant1:
//          code to be executed if expression == constant1
//         break;
//     case constant2:
//          code to be executed if expression == constant2
//         break;
//     default:
//          code to be executed if expression doesn't match any constants
// }


 int num;
 printf(" Adicione um numero de 1 a 7:"); 
 scanf("%d", &num);

switch(num){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terca-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Numero invalido! Por favor, insira um numero de 1 a 7.\n");
        break;

}

    return 0;
}