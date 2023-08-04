// CALCULADORA
#include <stdio.h>
#include <stdlib.h>

float sum()



int main()
{
    int i = 0, operation = 0;

    // HOW MUCH NUMBERS:
    int n = 0;
    printf("  > How much numbers do you want enter?: ");
    scanf("%d", &n);

    // FLOAT ARRAY WITH LENGTH N
    float numbers[n];

    // STORING n VALUES IN THE ARRAY NUMBERS:
    printf("\n  > Enter %d numbers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &numbers[i]);
    }

    /* TESTING THE NUMBERS STORAGE
    for(i = 0; i < n; i++)
    {
        printf("\n%.2f", numbers[i]);
    }
    */

    // ASKING THE MATH OPERATION
    printf("\nWhich operation do you want make with this numbers: \n(0)Sum\n(1)Subtration\n(2)Mult\n(3)Div\n  > Your option: ");
    scanf("%d", &operation);

    switch(operation)
    {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("\nInvalid operation...");
    }
}
