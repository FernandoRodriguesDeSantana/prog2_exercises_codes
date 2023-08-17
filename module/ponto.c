#include "ponto.h"
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    double s = pow(dy,2) + pow(dx,2);
    return sqrt(s);
}
