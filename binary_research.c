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







    int searchNumber(int array[], int wantedNumber)
{
    int arraySize = sizeof(array) / sizeof(array[0]);
    int lowerPosition = 0, higherPosition = arraySize;
    int middlePosition = arraySize / 2;

    if(wantedNumber == array[middlePosition])
    {
        printf("\n  >The number %d was finded at the middle", wantedNumber);
    }
    else if(wantedNumber <= array[middlePosition])
    {
        arraySize = middlePosition;
        middlePosition = arraySize / 2;
            if(wantedNumber == array[middlePosition])
        {
            printf("\n  >The number %d was finded at the middle", wantedNumber);
        }
    }
    else if(wantedNumber <= array[middlePosition])
    {
        arraySize = middlePosition;
        middlePosition = arraySize / 2;
            if(wantedNumber == array[middlePosition])
        {
            printf("\n  >The number %d was finded at the middle", wantedNumber);
        }
    }

}

    //for(int)
    return 0;
}
