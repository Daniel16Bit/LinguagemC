// #18 C Recursion | C Programming For Beginners

#include <stdio.h>

int sum(int n);

int main(){


    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sum(num);

    printf("Sum = %d\n", result);





    return 0;
}

int sum(int n){


    if (n != 0){

        return n + sum(n - 1);
    }
}