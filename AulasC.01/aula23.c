// #23 C Pointers | C Programming For Beginners
#include <stdio.h>

int main(){

    int age = 25;

    int* ptr = &age;

    printf("Adress: %p\n", ptr);

    printf("Value: %d\n", *ptr);

    /*
    int* ptr; 

    int var;
    */



    return 0; 
}