// #14 : break and continue in C | C Programming for Beginners

#include <stdio.h>

int main()
{

    while (1)
    {
        int num;
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);

        if (num < 0)
        {
            break;
        }
        printf("You entered: %d\n", num);
    }
    return 0;
}