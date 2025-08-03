#include <stdio.h>

// Soma se for pares, media se for impar

int main()
{

    float media = 0;
    int soma = 0;

    int somaImpar = 0;
    int contImpar = 0;

    int num[4];

    printf("Favor, 4 numeros!\n");
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);

    for (int i = 0; i < 4; i++)
    {

        if (num[i] % 2 == 0)
        {
            soma += num[i];
        }
        else
        {
            somaImpar += num[i];
            contImpar++;
        }
    }

    printf("A soma dos pares é: %d", soma);

    if (contImpar > 0)
    {
        media = (float)somaImpar / contImpar;
        printf("A média dos ímpares é: %.2f\n", media);
    }
    else
    {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}