//Crie uma função que recebe dois inteiros e um ponteiro para um inteiro e realiza a soma dos dois primeiros.
#include <stdio.h>
#include <stdlib.h>

// Função inteira que recebe como parâmetros dois ponteiros 'p' e 'q':
int sum_numbers(int *p, int *q){
    // Variáveis locais 'x' e 'y' estão armazenando os valores contidos nos endereços aos quais apontam '*p' e '*q'
    // Lembrando que '*p' = '*ptr1' e '*q' = '*ptr2'. Portando 'p' aponta para o endereço de '*a' e '*q' para o endereço de 'b':
    int x = *p, y = *q;

    // Soma os valores contidos nos respectivos endereços:
    int sum = x + y;

    // Retorna o valor da operação:
    return sum;
};

int main()
{
    // Variáveis "normais" que estão recebendo valores inteiros:
    int a = 20, b = 10, soma = 0;

    // Declarando dois ponteiros:
    int *ptr1;
    int *ptr2;

    // Armazenando o endereço de 'a=20' no ponteiro 'ptr1' e o endereço de 'b=10' no 'ptr2':
    ptr1 = &a;
    ptr2 = &b;

    // A função criada 'sum_numbers' está recebendo os ponteiros 'ptr1' e 'ptr2' como parâmetro
    // nos quais estão armazenados os endereços de 'a' e 'b' respectivamente:
    soma = sum_numbers(ptr1, ptr2);

    // Imprimindo o valor da soma entre 'a' e 'b':
    printf("The sum between %d and %d is %d\n", a,b,soma);

    return 0;
}
