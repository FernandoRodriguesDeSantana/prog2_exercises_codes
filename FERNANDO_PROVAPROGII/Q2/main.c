#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int register_number;
    float average;
};

int main()
{
    FILE *archive;
    int i, p = 3;
    struct student info[p];

    //testing the file opening
    archive = fopen("student_info.txt", "w");
    if(archive == NULL)
    {
        printf("\nERROR! The file cannot be opened.");
    }
    else
    {
        printf("\nSUCESS! The file has been opened.");
    }

    //storing the information in the structure
    printf("\n\n    --+=+--WELCOME TO STUDENT INFO INTERFACE--+=+--    ");
    for(i = 0; i < p; i++)
    {
        printf("\n\nFor the student number %d:", i+1);

        printf("\n\n >Enter the student name: ");
        fgets(info[i].name, 30, stdin);
        fflush(stdin);

        printf("\n >Enter the student register number: ");
        scanf("%d", &info[i].register_number);
        fflush(stdin);

        printf("\n >Enter the student average: ");
        scanf("%f", &info[i].average);
        fflush(stdin);
        printf("\n--+=+--+=+--+=+--+=+--+=+--+=+--+=+--+=+--");
        printf("\n%.2f", info[i].average);
    }

    //writing the information stored in the structure to a text file
    for(i = 0; i < p; i++)
    {
        fprintf(archive, "%s", info[i].name);
        fprintf(archive, "%d\n", info[i].register_number);
        fprintf(archive, "%.2f\n", info[i].average);
    }

    fclose(archive);

    return 0;
}
