// sequencial ordenation

#include <stdio.h>
#include <stdlib.h>

void insertSort(int array[], int n)
{
    int i,j, key;

    for(i = 0; i < n; i++)
    {
        key = array[i];
        j = i - 1;
        while((j >= 0) && (array[j] > key))
        {
            array[j+1] = array[j];
            j = j -1;
        }
        array[j+1] = key;
    }
}


int main()
{
    int array[] = {1,5,6,3,4,7,8,4};
    
    int n = sizeof(array) / sizeof(array[0]);
    
    insertSort(array,n);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
