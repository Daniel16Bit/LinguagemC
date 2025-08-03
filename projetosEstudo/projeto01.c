// Projeto feito para testar habilidades em C

#include <stdio.h>

int main(){


    int num[4];
    printf("Vamos ver se seu numero é impar ou par :)\n");
    printf("Adicione 4 numeros inteiros\n");
    scanf( "%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);

    for(int i = 0; i < 4; i++){
        if(num[i] % 2){
            printf("impar\n");
        }else{
            printf("Par\n");
        }
    }


    return 0;
}