#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Student student;

float directInsertionSort(Student student[], int numberOfStudents)
{
    int positionIndexJ = 0;

    for(int i = 1; i < numberOfStudents; i++)
    {
        Student helperOperator = student[i];
        positionIndexJ = i - 1;
        while((positionIndexJ >= 0) && (student[positionIndexJ].score > helperOperator.score))
        {

            student[positionIndexJ + 1] = student[positionIndexJ];
            positionIndexJ--;
        }
        student[positionIndexJ+1] = helperOperator;
    }

    for(int i = 0; i < numberOfStudents; i++)
    {
        printf("\n{%s, %.2f}", student[i].name, student[i].score);
    }

    return 0;
}
