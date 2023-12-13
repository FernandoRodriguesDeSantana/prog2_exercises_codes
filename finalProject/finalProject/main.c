#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// 100 sorted persons
#define MAX_RANDOM_LINES 100

int main() {
    struct StudentData *students;
    setlocale(LC_ALL, "Portuguese");
    int option;

    FILE *database = fopen("microdados_enem_2016_coma_reduzido_tratados.csv", "r");

    if (!database)
        printf("\nERROR: could not open file\n");
    else {
        printf("\nEnem report: ");
        readInfo(database, MAX_RANDOM_LINES);
        }
        fclose(database);
    return 0;
}
