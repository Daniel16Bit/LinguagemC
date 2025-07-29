// #29: C File Handling | C Programming for Beginners

#include <stdio.h>

int main(){

    FILE* fptr;

    fptr = fopen("aula29.txt", "w");

    if (fptr != NULL) {
        printf("File opened successfully.\n");
    }else {
        printf("Error opening file.\n");
        return 1; // Exit if file cannot be opened
    }
    fclose(fptr);
    return 0;
}

// Aqui eu nao fiz muito, pois odeio mexer com arquivos em C, python e etc