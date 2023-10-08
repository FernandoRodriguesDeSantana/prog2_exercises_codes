#include "bubble_sort.h"
#include <stdio.h>
int bubbleSortOrdenation(int numberArray[], int numberArraySize)
{
    int helperOperator = 0, flag = 1;

    printf("\nArray before the ordering: ");
    for(int i = 0; i < numberArraySize; i++)
    {
        printf("%d ", numberArray[i]);
    }
    while(flag)
    {
        flag = 0;

        for(int i = 0; i < numberArraySize-1; i++)
        {
            if(numberArray[i] > numberArray[i+1])
            {
                flag = 1; // If the condition is TRUE, set the flag to 1. This flag is used for signaling when numbers have been switched.
                helperOperator = numberArray[i+1];
                numberArray[i+1] = numberArray[i];
                numberArray[i] = helperOperator;
            }

            printf("\nArray after the ordering number: ");
            for(int i = 0; i < numberArraySize; i++)
            {
                printf("%d ", numberArray[i]);
            }
        }
    }

}
