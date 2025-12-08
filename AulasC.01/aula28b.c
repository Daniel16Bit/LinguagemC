// #28: Dynamic Memory Allocation in C | C Programming for Beginners
#include <stdio.h>

int main()
{

    int n = 4;

    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 0; 
    }




    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}
