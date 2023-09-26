#include "students_ifsc.h"
#include <stdlib.h>

void studentInformation(struct Student student, int numberStudent)
{
    Student *sizeStudent = (Student *)malloc(numberStudent*sizeof(Student));
    if(sizeStudent == NULL)
    {
        printf("ERROR!");
        return NULL;
    }

    Student student_f[numberStudent];

    for(int i = 0; i < numberStudent; i++)
    {
        printf("\nEnter the student's name number %d: ", i+1);
        strncpy(student.name, student_f[i].name, sizeof(student.name));

        printf("\nEnter the student's course number %d: ", i+1);
        strncpy(student.course, student_f[i].course, sizeof(student.course));

        printf("\nEnter the student's code number %d: ", i+1);
        scanf("%d", &student_f[i].code);
    }

}
