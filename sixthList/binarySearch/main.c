#include <stdio.h>
#include <stdlib.h>
#include "binarySearch.h"
#include <string.h>
#include <stdlib.h>
int main()
{
    char *wordsArray[] = {"pineapple","banana","dog","elephant","cat"};

    char targetElement[] = "dog";
    printf("\nSorted Array: ");
    alphabeticalOrdenation(wordsArray, 5);
    printf("\n");
    binarySearch(wordsArray, 5, targetElement);

    return 0;
}
