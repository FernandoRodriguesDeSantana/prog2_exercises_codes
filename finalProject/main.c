#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// 100 sorted persons

int main(){

    char buffer[1024];
    char *data;

    FILE *database = fopen("microdados_enem_2016_coma.csv", "r");

    if(!database)
        printf("\nERROR: could not open file\n");
    else
        printf("\nI was able to open the file\n");

    fgets(buffer, sizeof(buffer), database);
    printf("%s\n", buffer);

    while(fgets(buffer, sizeof(buffer), database))
        printf("%s\n", buffer);


    strtok(buffer, ",");


    return 0;
}
