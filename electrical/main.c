#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "electric.h"

int main()
{
    double voltage = 0, resistance = 0;

    printf("Enter the voltage and resistance values: ");
    scanf("%lf%lf", &voltage, &resistance);

    double current = currentValue(voltage, resistance);

    printf("\nThe current value is: %.2lf A", current);

    return 0;
}
