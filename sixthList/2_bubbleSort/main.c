// Considere o seguinte array de n�meros : [7, 3, 1, 5, 2]. Mostre o estado do array ap�s cada
// itera��o do algoritmo Bubble Sort, utilizando o m�todo de ordena��o em ordem crescente.
#include "2_bubbleSort.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberArray[5] = {7,3,1,5,2};
    int increasing_decreascing = 0;
    int sizeArray = sizeof(numberArray) / sizeof(numberArray[0]);
    bubbleSortOrdenation(numberArray, sizeArray, increasing_decreascing);
    return 0;
}
