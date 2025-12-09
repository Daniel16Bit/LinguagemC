// #19 C Arrays | C Programming For Beginners
 
#include <stdio.h>

int main(){

/*

    dataType arrayName[arraySize];
    EX: int numbers[5]; 

*/
    int numbers[5];


    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }


    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }



    return 0;
}