// #13: for Loop in C Programming | C Programming for Beginners

#include <stdio.h>

int main() {
    // Using a for loop to print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    // Using a for loop to calculate the sum of numbers from 1 to 10
    int sum = 0;
    for (int j = 2; j <= 10; j += 2) {
        sum += j;
    }
    printf("Sum of numbers from 1 to 10 is: %d\n", sum);

    return 0;
}