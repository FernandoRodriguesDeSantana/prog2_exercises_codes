/*No programa principal (main.c) solicite ao usu�rio que insira o tamanho de um
vetor, aloque espa�o para armazenar os elementos do vetor e preencha-o com os
valores indicados pelo usu�rio. Ap�s isso, calcule a m�dia dos elementos do vetor e
exiba os resultados. As fun��es para alocar o vetor, calcular a soma e a m�dia, e
liberar o vetor s�o definidas no arquivo vetor.c e suas declara��es s�o colocadas no
arquivo vetor.h, que deve estar inclu�do em main.c.*/
#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vectorSize = 0;
    int *vectorElements;

    printf("Enter a vector size: ");
    scanf("%d", &vectorSize);



    return 0;
}
