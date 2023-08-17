#include "electric.h"
#include <math.h>

double currentValue(double voltage, double resistance)
{
    double current = voltage / resistance;
    return current;
}
