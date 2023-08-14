// Primeiro exemplo da aula do dia 14/08/2023
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array size
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Memory allocation
    int *array = malloc(n*sizeof(int));
    if(array == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    else
    {
        printf("\nMemory allocation has been done...\n\n");
    }

    // Filling in the array
    for(int i = 0; i < n; i++)
    {
        array[i] = i;
        printf("%d", array[i]);
    }
    
    // Cleaning the unused memory
    free(array);

    return 0;
}
