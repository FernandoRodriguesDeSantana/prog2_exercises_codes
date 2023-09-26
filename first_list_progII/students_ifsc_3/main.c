#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "students_ifsc.h"
typedef struct Student_h
{
    char name[50];
    char course[30];
    int code;
} Student_h;

int main()
{
    int numberStudent = 0;

    printf("Enter the number of new students: ");
    scanf("%d", &numberStudent);

    Student student[numberStudent];


    return 0;
}
