#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "functions.h"

void readInfo(char *database, int MAX_RANDOM_LINES){
        char buffer[1024];

        int row = 0, column = 0;

        int printColumns[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

        srand(time(NULL));
        rewind(database);

        while (fgets(buffer, sizeof(buffer), database) && row < MAX_RANDOM_LINES) {
            column = 0;
            row++;

            if (row == 1)
                continue;

            char *data = strtok(buffer, ", ");

            while (data) {
                if (column < sizeof(printColumns) / sizeof(printColumns[0]) && printColumns[column]) {
                    if (column == 0)
                        printf("\n\tSerial code: ");
                    else if (column == 1)
                        printf("\n\tState: ");
                    else if (column == 2)
                        printf("\n\tAge: ");
                    else if (column == 3)
                        printf("\n\tGender: ");
                    else if (column == 4)
                        printf("\n\tColor: ");
                    else if (column == 5)
                        printf("\n\tNatural Sciences Score: ");
                    else if (column == 6)
                        printf("\n\tHuman Sciences Score: ");
                    else if (column == 7)
                        printf("\n\tLanguages Score: ");
                    else if (column == 8)
                        printf("\n\tMath Score: ");
                    else if (column == 9)
                        printf("\n\tEssay Score: ");
                    else if (column == 10)
                        printf("\n\tAnswers: ");

                    printf("%s ", data);
                }

                data = strtok(NULL, ", ");
                column++;
            }
            printf("\n");
        }
}
