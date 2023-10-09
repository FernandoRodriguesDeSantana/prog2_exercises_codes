#include "binarySearch.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void alphabeticalOrdenation(char *wordsArray[], int numberOfElements)
{
    int charComparation = 0;
    char *aux;

    for(int i = 0; i < numberOfElements - 1; i++)
    {
        for(int j = i + 1; j < numberOfElements; j++)
        {
            charComparation = strcmp(wordsArray[i], wordsArray[j]);
            if(charComparation > 0)
            {
                aux = wordsArray[i];
                wordsArray[i] = wordsArray[j];
                wordsArray[j] = aux;
            }
        }
    }

    for(int i = 0; i < numberOfElements; i++)
    {
        printf("\n%s", wordsArray[i]);
    }
}

int binarySearch(char *wordsArray[], int numberOfElements, char *targetElement)
{
    int firstElement = 0, lastElement = (numberOfElements - 1);

    while (firstElement <= lastElement)
    {
        int middleElement = ((firstElement + lastElement) / 2);
        int comparison = strcmp(wordsArray[middleElement], targetElement);

        if (comparison == 0)
        {
            printf("\n%s finded in the position %d\n", targetElement, middleElement);
            return middleElement;
        }
        else if (comparison < 0)
        {
            firstElement = middleElement + 1;
        }
        else
        {
            lastElement = middleElement - 1;
        }
    }

    printf("\n%s don't found\n", targetElement);
    return -1;
}
