#include "lib_mat.h"

int factorial(int a)
{
    int i = 0, mult = 1;
    for(i = a; i > 0; i--)
    {
        mult = mult * i;
    }
    printf("%d", mult);
    return 0;
}

int absolute(int a)
{
    if(a < 0)
    {
        a = a * (-1);
        printf("\n%d", a);
    }
    else
    {
        printf("\n%d", a);
    }
    return 0;
}

float square(float a)
{
    a = a*a;
    printf("\n%.2f", a);
    return 0;
}
