// #25 C Pointers and Functions | C Programming For Beginners

#include <stdio.h>


int* findSquare(int* num){
    *num = (*num) * (*num); 
    return num;
}



int main(){

    int number = 21;
    int* result = findSquare(&number); // Pass the address of number
    printf("Number: %d\n", *result); // Output the modified value

    return 0;
}