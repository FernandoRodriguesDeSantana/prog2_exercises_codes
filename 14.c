//Desenvolva um programa que solicita ao usuário o tamanho de um array.
//Depois, preencha este array com os dados e escreva-os em um arquivo
//chamado “array.txt”.

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

    // Opening the archive
    FILE *archive = fopen("data.txt", "w");
    if(archive == NULL)
    {
        printf("ERROR!");
        free(array);
        return 2;
    }

    // Printing in the array
    for(int i = 0; i < n; i++)
    {
        fprintf(archive, "%d", array[i]);
    }

    fclose(archive);
    // Cleaning the unused memory
    free(array);

    return 0;
}
