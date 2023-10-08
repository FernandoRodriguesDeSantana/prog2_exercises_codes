#include "directInsertion.h"
#include <string.h>
Product storage;

float directInsertionSort(Product storage[], int numberOfProducts)
{
    int positionIndexJ = 0;

    for(int i = 1; i < numberOfProducts; i++)
    {
        Product helperOperator = storage[i];
        positionIndexJ = i - 1;
        while((positionIndexJ >= 0) && (storage[positionIndexJ].price > helperOperator.price))
        {

            storage[positionIndexJ + 1] = storage[positionIndexJ];
            positionIndexJ--;
        }
        storage[positionIndexJ+1] = helperOperator;
    }

    for(int i = 0; i < numberOfProducts; i++)
    {
        printf("\n{%s, %.2f}", storage[i].name, storage[i].price);
    }

    return 0;
}
