// #22 C String Functions | C Programming For Beginners

#include <stdio.h>
#include <string.h>

int main(){

    char language[] = "C Programming";
    char food[] = "Pizza";

    char midFood[strlen(food)];


    strcpy(midFood, food);

    printf("%s\n", language);
    printf("Length of the string: %zu\n", strlen(language));



    printf("%s\n", midFood);
    return 0;
}