//Utilize a função a calloc para alocar uma string com valor inicial “Hello”.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *word = "Hello";

    int array_size = strlen(word) + 1;

    char *array = calloc(array_size, sizeof(char));

    if(array == NULL)
    {
        printf("\nERROR!");
        return 1;
    }

    strcpy(array, word);

    printf("The string is %s", array);

    /*
    for(int i = 0; i < 5; i++)
    {
        printf("\n%s", array[i]);
    }

    free(array);
    */

    return 0;
}
