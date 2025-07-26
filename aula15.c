// #15 C Functions | C Programming for Beginners

#include <stdio.h> 


void greet(){
    printf("Hello, World!\n");

}


void calcularQuadrado(int num){

int quad = num * num;
    printf("O quadrado de %d é %d\n", num, quad);


}

int main(){

    /*
        returnType functionName(parameterType parameterName) {
             function body
        }

    
    */

greet();  // Chamando a função greet
calcularQuadrado(5); // Chamando a função calcularQuadrado com o argumento 5, dentro da funcao nos colocamos o argumento que queremos passar para a função.  (int num = 5)

    return 0;
}