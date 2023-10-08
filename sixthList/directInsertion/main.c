// No array de objetos “Produto” a seguir, cada um contém nome e preço:
// typedef struct {
//  char nome[20];
//  float preco;
// } Produto;
//  Produto estoque[ ] = { {"Caneta", 1.50}, {"Caderno", 7.80}, {"Lápis", 0.80}, {"Borracha", 0.50}, {"Régua", 2.20}};
// Utilize o algoritmo de inserção direta que deverá ordenar o array “estoque” em ordem crescente
// de acordo com o preço dos produtos. Após a ordenação, imprima o nome e preço do produto em
// linhas separadas.

#include "directInsertion.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numberOfProducts = 5;
    /*
    Product *storage = malloc(numberOfProducts * sizeof(Product));
    if(storage == NULL)
    {
        printf("\nERROR!");
    }
    */

    Product storage[] =
    {
        {"Pen", 1.50},
        {"Noteboook", 7.80},
        {"Pencil", 0.80},
        {"Eraser", 0.50},
        {"Ruler", 2.20}
    };

    directInsertionSort(storage, numberOfProducts);

    return 0;
}
