#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "functions.h"

// 100 sorted persons
#define MAX_RANDOM_LINES 100

int main(){

    FILE *database = fopen("microdados_enem_2016_coma.csv", "r");

    if(!database)
        printf("\nERROR: could not open file\n");
    else{
        printf("\nI was able to open the file\n");
        char buffer[1024];
        int row, column = 0;

        long databaseSize, position;

        srand(time(NULL));

        fseek(database, 0, SEEK_END);
        databaseSize = ftell(database);


        while(fgets(buffer, sizeof(buffer), database)){
            column = 0;
            row++;

            if(row == 1)
                continue;

            char *data = strtok(buffer, ", ");

            while(data){

                if(column == 0)
                    printf("\n\tSerial code: ");

                if(column == 1)
                    printf("\n\tYear: ");

                if(column == 2)
                    printf("\n\tCity: ");

                printf("%s", data);
                data = strtok(NULL, ", ");
                column++;
            }
            printf("\n");

        /*
            for(int i = 0; i < MAX_RANDOM_LINES; i++){
                position = rand() % databaseSize;

                fseek(database, position, SEEK_SET);

                if(fgets(buffer, sizeof(buffer), database) != NULL)
                    printf("\n\tSorted line %d: %s", i+1, buffer);
                else{
                    fprintf(stderr, "ERROR\n");
                    break;
                }
            }*/
        }
        fclose(database);

    }
    return 0;
}
