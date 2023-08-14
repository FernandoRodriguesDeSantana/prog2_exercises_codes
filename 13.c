// Crie um programa que pede ao usuário para digitar o tamanho de um vetor de inteiros e aloca memória dinamicamente para esse vetor.
// Depois, preencha esse vetor com os números digitados pelo usuário e exiba os valores armazenados.
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
    
    // Filling the array
    printf("\nEnter the numbers: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Printing in the array
    for(int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    
    // Cleaning the unused memory
    free(array);

    return 0;
}
