// Defina uma nova estrutura que utiliza escrita de arquivos para armazenar informações de funcionários em um arquivo de texto.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct worker_info
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    FILE *archive;
    archive = fopen("worker_info.txt", "w");
    if(archive == NULL)
    {
        printf("ERROR!");
    }

    struct worker_info worker;

    printf("\nEnter the worker name: ");
    fgets(worker.name, 50, stdin);
    fflush(stdin);

    printf("\nEnter the worker age: ");
    scanf("%d", &worker.age);

    printf("\nEnter the worker salary: ");
    scanf("%f", &worker.salary);

    printf("\n");

    fprintf(archive, "Name: %s", worker.name);
    fprintf(archive, "Age: %d", worker.age);
    fprintf(archive, "\nSalary: %.2f", worker.salary);
    
    fclose(archive);
    
    return 0;
}
