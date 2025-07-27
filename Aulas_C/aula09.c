// #9: If Else Statements in C | C Programming for Beginners

#include <stdio.h>


int main() {


    int number = 10; 


    if (number >0 ) {
        printf(" O numero é positivo\n");
    }
    else if (number < 0) {
        printf("O numero é negativo\n");
    }
    else {
        printf("O numero é zero\n");
    }



    int a = 5;

    if(!(a % 2 == 0)){
        printf(" Dentro do IF\n");
    }else{
        printf(" Dentro do ELSE\n");
    }

    return 0; 
}