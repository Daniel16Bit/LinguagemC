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



    printf("Allocated memory\n");
    for (int i = 0; i < n; i++){
        printf("%p\n", (ptr + i));
    }


    n = 6;

    ptr = realloc(ptr, n * sizeof(int));

    printf("New memory allocation after realloc\n");
    for(int i = 0; i < n; i++){
        printf("%p\n", (ptr + i));
    }
    free(ptr);

    return 0;
}
