// #21 C Strings | C Programming For Beginners

#include <stdio.h>
#include <string.h>

int main (){

    char str[] = "Programando em C";
    str[2] = 'O'; // Change the third character to 'O'
    str[4] = 'G'; // Change the fifth character to 'G'
    printf("%s\n", str); // Print the modified string


    return 0; 
} 