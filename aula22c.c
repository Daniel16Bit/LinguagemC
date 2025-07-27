// #22 C String Functions | C Programming For Beginners

#include <stdio.h>
#include <string.h>

int main(){

    char language[] = "Abcd";
    char language2[] = "Efgh";

    strcmp(language, language2);
    int result = strcmp(language, language2);

    printf("Comparison result: %d\n", result);

    return 0;
}