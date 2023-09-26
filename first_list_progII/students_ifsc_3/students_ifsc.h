#ifndef STUDENTS_IFSC_H

#define STUDENTS_IFSC_H

typedef struct Student
{
    char name[50];
    char course[30];
    int code;
} Student;

void studentInformation(struct Student, int numberStudent);
#endif // STUDENTS_IFSC_H
