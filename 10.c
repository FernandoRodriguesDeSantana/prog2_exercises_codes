#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student_info
{
    char name[50];
    int age;
    float score;
};

int main()
{
    struct Student_info student;

    printf("\nEnter the student name: ");
    fgets(student.name, 50, stdin);
    fflush(stdin);

    printf("\nEnter the student age: ");
    scanf("%d", &student.age);

    printf("\nEnter the student score: ");
    scanf("%f", &student.score);

    printf("\n");

    printf("Name: %s", student.name);
    printf("Age: %d", student.age);
    printf("\nScore: %.2f", student.score);

    return 0;
}
