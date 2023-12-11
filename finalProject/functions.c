#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "functions.h"
struct StudentData
{
    int NU_INSCRICAO;
    char SG_UF_RESIDENCIA[3];
    int NU_IDADE;
    char TP_SEXO;
    int TP_COR_RACA;
    float NU_NOTA_CN;
    float NU_NOTA_CH;
    float NU_NOTA_LC;
    float NU_NOTA_MT;
    float NU_NOTA_REDACAO;
    int Q005;
    float Q006;
    char Q025;
};

void readInfo(char *database, int MAX_RANDOM_LINES)
{
    struct StudentData *student[MAX_RANDOM_LINES];
    char buffer[1024];

    int row = 0, column = 0, count=0;

    int printColumns[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    srand(time(NULL));

    while (fgets(buffer, sizeof(buffer), database) && row < MAX_RANDOM_LINES)
    {
        column = 0;
        row++;

        if (row == 1)
            continue;

        char *data = strtok(buffer, ", ");

        while (data)
        {
            if (column < sizeof(printColumns) / sizeof(printColumns[0]) && printColumns[column])
            {
                if (column == 0)
                {
                    printf("\n\tSerial code: ");
                }

                else if (column == 1)
                {
                    printf("\n\tState: ");
                }

                else if (column == 2)
                {
                    printf("\n\tAge: ");
                }

                else if (column == 3)
                {
                    printf("\n\tGender: ");
                }

                else if (column == 4)
                {
                    printf("\n\tColor: ");
                }

                else if (column == 5)
                {
                    printf("\n\tNatural Sciences Score: ");
                }

                else if (column == 6)
                {
                    printf("\n\tHuman Sciences Score: ");
                }

                else if (column == 7)
                {
                    printf("\n\tLanguages Score: ");
                }

                else if (column == 8)
                {
                    printf("\n\tMath Score: ");
                }

                else if (column == 9)
                {
                    printf("\n\tEssay Score: ");
                }

                else if (column == 10)
                {
                    printf("\n\tAnswer 1: ");
                }
                else if (column == 11)
                {
                    printf("\n\tAnswer 2: ");
                }
                else if (column == 12)
                {
                    printf("\n\tAnswer 3: ");
                }
                printf("%s ", data);
            }
        }
        data = strtok(NULL, ", ");
        column++;
    }
    printf("\n");
}

void storeData(FILE *database, struct StudentData *student, int MAX_RANDOM_LINES) {
    char buffer[1024];
    int count = 0;

    fgets(buffer, sizeof(buffer), database); // Read and discard the header line

    fgets(buffer, sizeof(buffer), database);
    while (fgets(buffer, sizeof(buffer), database) && count < MAX_RANDOM_LINES) {
        sscanf(buffer, "%d,%2s,%d,%c,%d,%f,%f,%f,%f,%f,%d,%f,%c",
        &student[count]->NU_INSCRICAO, student[count]->SG_UF_RESIDENCIA,
        &student[count]->NU_IDADE, &student[count]->TP_SEXO,
        &student[count]->TP_COR_RACA, &student[count]->NU_NOTA_CN,
        &student[count]->NU_NOTA_CH, &student[count]->NU_NOTA_LC,
        &student[count]->NU_NOTA_MT, &student[count]->NU_NOTA_REDACAO,
        &student[count]->Q005, &student[count]->Q006, &student[count]->Q025);
        count++;
    }
}



    }
