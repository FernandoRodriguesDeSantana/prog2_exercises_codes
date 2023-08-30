#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main()
{
    double a = 4.5, b = 2.43;

    double result = sum_numbers(a,b);
    printf("%lf", result);

    double result2 = sub_numbers(a,b);
    printf("\n%lf", result2);

    double result3 = mul_numbers(a,b);
    printf("\n%lf", result3);

    return 0;
}
