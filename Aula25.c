// #25 C Pointers and Functions | C Programming For Beginners

#include <stdio.h>
void findValue(int* num){
    *num = 39; 
}

int main(){


    int number = 21; 
    findValue(&number); // Pass the address of number


    printf("Number: %d\n", number); // Output the modified value
    

    return 0;
}