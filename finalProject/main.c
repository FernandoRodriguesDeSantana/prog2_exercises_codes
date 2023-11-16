#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "functions.h"

// 100 sorted persons

int main(){

    FILE *database = fopen("microdados_enem_2016_coma.csv", "r");

    if(!database)
        printf("\nERROR: could not open file\n");
    else{
        printf("\nI was able to open the file\n");
        char buffer[1024];
        int row, column = 0;

        while(fgets(buffer, sizeof(buffer), database)){
            column = 0;
            row++;

            if(row == 1)
                continue;

            char *data = strtok(buffer, ", ");

            while(data){
                if(column == 1)
                    printf("\n\tName: ");

                if(column == 2)
                    printf("\n\tName: ");

                printf("%s", data);
                data = strtok(NULL, ", ");
                column++;
            }
            printf("\n");
        }
        fclose(database);
    }

    return 0;
}
