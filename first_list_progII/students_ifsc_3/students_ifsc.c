#include "students_ifsc.h"
#include <string.h>
#include <stdio.h>

Student *newStudent(char name_s[], int code_s, char course_s[])
{
    Student *newInformation = malloc(sizeof(Student));
    if(newInformation == NULL)
    {
        printf("\nERROR IN THE MEMORY ALLOCATION");
        return NULL;
    }
}

