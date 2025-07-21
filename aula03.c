// #3: Data Types in C Programming | C Programming for Beginners

#include <stdio.h>

/*
        int     (4 bytes)   - Integers          | -2,147,483,648 to 2,147,483,647    | %d para printar
        double  (8 bytes)   - Decimal numbers   | 15-17 digits of precision          | %lf para printar
        float   (4 bytes)   - Decimal numbers   | 6-7 digits of precision            | %f para printar
        char    (1 byte)    - Single characters | %c para printar                    | %c para printar

*/

int main(){ 

    int age = 10;
    double altura = 1.75;
    float peso = 70.5f; // 'f' suffix indicates float type
    // float peso = 70.5; // This would be treated as double by default
    char letra = 'M';



    printf("Idade = %d\n", age);
    printf("Altura = %.2lf\n", altura);
    printf("Peso = %.2f\n", peso);
    printf("Masculino ou Feminino = %c\n", letra);

    return 0;
}