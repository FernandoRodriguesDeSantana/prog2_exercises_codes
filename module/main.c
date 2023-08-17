#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    double x1 = 0, x2 = 0,y1 = 0, y2 = 0;

    printf("Insira um ponto (X1, Y1): ");
    scanf("%lf%lf", &x1, &y1);

    printf("\nInsira outro ponto (X2, Y2): ");
    scanf("%lf%lf", &x2, &y2);

    double distancia = calcularDistancia(x1,y1,x2,y2);
    printf("\nDistancia: %.2lf", distancia);

    return 0;
}
