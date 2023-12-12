#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "functions.h"
struct Student {
    char serialCode[50];
    int answer1;
    int answer2;
    int answer3;
    float average;
};

int charToNumber(char character) {
    if (character == 'A') {
        return 0;
    }
    else if (character == 'B') {
        return 800;
    }
    else if (character == 'C') {
        return 1100;
    }
    else if (character == 'D') {
        return 1500;
    }
    else if (character == 'E') {
        return 2000;
    }
    else if (character == 'F') {
        return 2300;
    }
    else if (character == 'G') {
        return 3100;
    }
    else if (character == 'H') {
        return 4000;
    }
    else if (character == 'I') {
        return 4700;
    }
    else if (character == 'J') {
        return 5500;
    }
    else if (character == 'K') {
        return 6300;
    }
    else if (character == 'L') {
        return 7000;
    }
    else if (character == 'M') {
        return 7800;
    }
    else if (character == 'N') {
        return 9500;
    }
    else if (character == 'O') {
        return 12000;
    }
    else if (character == 'P') {
        return 15000;
    }
    else if (character == 'Q') {
        return 20000;
    }
    else {
        return -1;
    }
}

int charToBin(char character) {
    if (character == 'A') {
        return 0;
    }
    else if (character == 'B') {
        return 1;
    }
    else {
        return -1;
    }
}
void readInfo(FILE *database, int MAX_RANDOM_LINES) {
    char buffer[1024];
    float aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, average = 0;
    int row = 0, column = 0, answer1 = 0, answer2 = 0, answer3 = 0, studentIndex = 0;
    struct Student students[100];
    int printColumns[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

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
                    {
                        printf("\n\tSerial code: ");
                        printf("%s ", data);
                        strncpy(students[studentIndex].serialCode, data, sizeof(students[studentIndex].serialCode));
                    }

                    else if (column == 1){
                        printf("\n\tState: ");
                        printf("%s ", data);
                    }

                    else if (column == 2){
                        printf("\n\tAge: ");
                        printf("%s ", data);
                    }

                    else if (column == 3){
                        printf("\n\tGender: ");
                        printf("%s ", data);
                    }
                    else if (column == 4){
                        printf("\n\tColor: ");
                        printf("%s ", data);
                    }
                    else if (column == 5){
                        printf("\n\tNatural Sciences Score: ");
                        aux1 = atof(data);
                        printf("%s ", data);
                    }

                    else if (column == 6){
                        printf("\n\tHuman Sciences Score: ");
                        aux2 = atof(data);
                        printf("%s ", data);
                    }

                    else if (column == 7){
                        printf("\n\tLanguages Score: ");
                        aux3 = atof(data);
                        printf("%s ", data);
                    }

                    else if (column == 8){
                        printf("\n\tMath Score: ");
                        aux4 = atof(data);
                        printf("%s ", data);
                    }

                    else if (column == 9){
                        printf("\n\tEssay Score: ");
                        aux5 = atof(data);
                        printf("%s ", data);
                    }

                    else if (column == 10){
                        printf("\n\tAnswers: ");
                        answer1 = atoi(data);
                        printf("\n\t\tAnswer 1: ");
                        printf("%s ", data);

                    }

                    else if (column == 11){
                        printf("\n\t\tAnswer 2: ");
                        answer2 = charToNumber(data[0]);
                        printf("%s ", data);
                    }

                    else if (column == 12){
                        printf("\n\t\tAnswer 3: ");
                        answer3 = charToBin(data[0]);
                        printf("%s ", data);
                        printf("\n");
                    }
                    data = strtok(NULL, ", ");
                }
                column++;
        }
        average = (aux1+aux2+aux3+aux4+aux5) / 5;
        printf("Average: %.2f\n", average);
        students[studentIndex].average = average;
        printf("Answer 1: %d\n", answer1);
        students[studentIndex].answer1 = answer1;
        printf("Answer 2: %d\n", answer2);
        students[studentIndex].answer2 = answer2;
        printf("Answer 3: %d\n", answer3);
        students[studentIndex].answer3 = answer3;
        studentIndex++;

    }
    printf("\n\n");

}
