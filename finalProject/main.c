#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// 100 sorted persons
#define MAX_RANDOM_LINES 100

int main() {
    setlocale(LC_ALL, "Portuguese");

    FILE *database = fopen("microdados_enem_2016_coma_reduzido_tratados.csv", "r");

    if (!database)
        printf("\nERROR: could not open file\n");
    else {
        readInfo(database, MAX_RANDOM_LINES);
        fclose(database);
    }
    return 0;
}
