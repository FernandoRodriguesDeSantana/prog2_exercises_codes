// No array de objetos �Produto� a seguir, cada um cont�m nome e pre�o:
// typedef struct {
//  char nome[20];
//  float preco;
// } Produto;
//  Produto estoque[ ] = { {"Caneta", 1.50}, {"Caderno", 7.80}, {"L�pis", 0.80}, {"Borracha", 0.50}, {"R�gua", 2.20}};
// Utilize o algoritmo de inser��o direta que dever� ordenar o array �estoque� em ordem crescente
// de acordo com o pre�o dos produtos. Ap�s a ordena��o, imprima o nome e pre�o do produto em
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
