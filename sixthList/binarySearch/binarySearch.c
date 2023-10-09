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

char binarySearch(char *wordsArray, int numberOfELements)
{
    char firstElement = wordsArray[0];
    char lastElement= wordsArray[numberOfELements - 1];
    char middleElement = wordsArray[numberOfELements/2];
    char targetElement[] = {"dog"};

    if(middleElement == targetElement)
    {

    }
}
