// #11: Switch Statement in C | C Programming for Beginners

#include <stdio.h>

int main(){

int num;
printf("Adicione um numero de 1 a 7: ");
scanf("%d", &num);

switch(num){

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia da semana: ");
    break;

    case 1:
        printf("fim de semana");
        break;

    default:
        printf("Numero invalido! Por favor, insira um numero de 1 a 7.\n");
        break;
}


}