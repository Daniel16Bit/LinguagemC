// #11: Switch Statement in C | C Programming for Beginners

#include <stdio.h>

int main() {

char operation;
printf("Digite uma operação (+, -, *, /): ");
scanf(" %c", &operation);
    

double num1, num2;

printf(" Digite o primeiro numero: "); 
scanf("%lf", &num1);
printf("Digite o segundo numero: ");
scanf("%lf", &num2);

double result;

switch (operation) {{

    case '+':
        result = num1 + num2;
        printf("Resultado: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Resultado: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Resultado: %.2lf\n", result);
        break;
    case '/':
        result = num1 / num2;
        if (num2 != 0) {
            printf("Resultado: %.2lf\n", result);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }


}

    return 0; 
}