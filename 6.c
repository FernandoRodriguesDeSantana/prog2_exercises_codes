// Exercício: Faça uma função que recebe um array de inteiros e seu tamanho e imprime seus elementos e mostre também o triplo deles.

#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
    	printf("\nArray[%d] is %d, and the triple is %d", i, a[i], a[i]*3);
	}
};

int main()
{
	int array_size = 0;
	printf("\nHow much number do you want input: ");
	scanf("%d", &array_size);

	int num_array[array_size];

	printf("\nEnter the numbers: ");
	for(int i = 0; i < array_size; i++)
	{
    	scanf("%d", &num_array[i]);
	}

	print_array(&num_array, array_size);

	return 0;
}
