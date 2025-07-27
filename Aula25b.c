// #25 C Pointers and Functions | C Programming For Beginners

#include <stdio.h>


void findSquare(int* num){
    *num = (*num) * (*num); 
}



int main(){

    int number = 21;
    findSquare(&number); // Pass the address of number
    printf("Number: %d\n", number); // Output the modified value

    return 0;
}