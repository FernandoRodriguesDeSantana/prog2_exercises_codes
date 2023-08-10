#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archive;
    int numbers[5] = {10, 20, 30, 40, 50};

    archive = fopen("number.bin", "wb");
    if(archive == NULL)
    {
        printf("Error. The archive can't be opened...");
        return 1;
    }

    fwrite(&numbers, sizeof(int), 5, archive);
    fclose(archive);

    printf("\nThe numbers has been read.\n\n");

    FILE *archive2;

    archive2 = fopen("number.bin", "rb");
    if(archive2 == NULL)
    {
        perror("\nError to open the archive.");
        return 1;
    }

    int numbers_two[5];
    fscanf(archive2, "%d", &numbers_two);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numbers_two[i]);
    }

    printf("\n");
    return 0;
}
