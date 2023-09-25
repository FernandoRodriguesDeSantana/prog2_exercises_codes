// Crie uma biblioteca de matemática chamada biblio_mat.h que deve possuir as seguintes funções:
//a. fatorial b. valor absoluto c. quadrado Faça a modularização incluindo biblio_math.c e main.c.
#include <stdio.h>
#include <stdlib.h>
#include "lib_mat.h"

int main()
{
    int a = -5;

    factorial(a);
    absolute(a);
    square(a);
    return 0;
}
