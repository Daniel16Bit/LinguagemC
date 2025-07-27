// #22 C String Functions | C Programming For Beginners

#include <stdio.h>
#include <string.h>

int main(){

    char language[] = "Brasil com ";
    char food[] = "Feijoada";

strcat(language, food);

    printf("%s\n", language);

    return 0;
}