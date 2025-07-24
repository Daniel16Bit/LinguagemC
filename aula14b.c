// #14 : break and continue in C | C Programming for Beginners

#include <stdio.h>

int main (){

    for(int i = 0; i <=5; i++){


        if (i == 3){
            printf("Skipping the number 3\n");
            continue; // Skip the rest of the loop when i is 3
        }
        printf("i is %d\n", i); // Print the value of i
    }


    return 0;
}