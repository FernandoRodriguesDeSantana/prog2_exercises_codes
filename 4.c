/*Faça um programa que utiliza duas funções: uma que
recebe um ponteiro e adiciona 1 ao seu valor e outra
que recebe dois ponteiros inteiros e retorna a soma dos
valores apontados. */

#include <stdio.h>
#include <stdlib.h>

int increase(int *p)
{
    int x = *p;
    x = x + 1;
    return (x);
};


int main()
{
    int a = 0, result = 0, option = 0;
    int *ptr1;
    ptr1 = &a;
    
    do
    {
        result = increase(ptr1);
        *ptr1 = result;
        printf("The increase result is: %d", result);
        printf("\nIncrease again? (0) No (1) Yes: ");
        scanf("%d", &option);
    } while(option != 0);

    
    return 0;
}
