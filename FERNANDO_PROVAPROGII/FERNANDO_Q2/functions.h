#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct
{
    char name[20];
    float score;
} Student;

float directInsertionSort(Student student[], int numberOfStudents);

#endif // FUNCTION_H
