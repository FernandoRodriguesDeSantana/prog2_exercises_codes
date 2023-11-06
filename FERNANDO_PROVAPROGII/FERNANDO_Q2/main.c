#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numberOfStudents = 5;

    Student student[] =
    {
        {"Jair Bolsonaro", 2.2},
        {"Lula da Silva",  1.3},
        {"Cabo Daociolo",  7.42},
        {"Dilma Roussef",  2.34},
        {"Padre Kelson",   6.66}
    };

    directInsertionSort(student, numberOfStudents);

    return 0;
}
