// Exemplo: Faça uma função que imprima um array
#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
    	printf("\n%d", a[i]);
	}
};

int main()
{
	int n = 5;
	int m[] = {1,2,3,4,5};

	/*
	int tamanho=sizeof(array) / sizeof(array[0]);
	indica o tamanho em byte do array / grandezas do array;
	*/

	print_array(m, n);

	return 0;
}
