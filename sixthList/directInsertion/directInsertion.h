#ifndef DIRECTINSERTION_H

#define DIRECTINSERTION_H

typedef struct
{
    char name[20];
    float price;
} Product;

float directInsertionSort(Product storage[], int numberOfProducts);

#endif // DIRECTINSERTION_H
