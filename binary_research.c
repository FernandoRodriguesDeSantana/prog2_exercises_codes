#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int min = 0, max = 0, average = 0, number = 0;

    do
    {
        max++;
    }
    while(array[max] != '\0');

    average = (max + min) / 2;

    printf("\nWhich number do you want find?\n  >");
    scanf("%d", &number);

    printf("\n  >Low position: %d\n  >High position: %d\n  >Middle position: %d\n  >Wanted number: %d", min, max, average, number);

    if(array[number] <= array[average])
    {
        for(int i = 0; i < average; i++)
        {
            if(array[i] == number)
            {
                printf("    \n>The number %d was finded", array[i]);
            }
        }
    }
    else
    {
        printf("\n  >Searching in the second half...");
        for(int i = average; i < max; i++)
        {
            if(array[i] == number)
            {
                printf("\n  >The number %d was finded", array[i]);
            }
        }
    }

    //for(int)
    return 0;
}
