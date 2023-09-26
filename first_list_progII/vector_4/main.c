/*No programa principal (main.c) solicite ao usuário que insira o tamanho de um
vetor, aloque espaço para armazenar os elementos do vetor e preencha-o com os
valores indicados pelo usuário. Após isso, calcule a média dos elementos do vetor e
exiba os resultados. As funções para alocar o vetor, calcular a soma e a média, e
liberar o vetor são definidas no arquivo vetor.c e suas declarações são colocadas no
arquivo vetor.h, que deve estar incluído em main.c.*/
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
