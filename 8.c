// Gere 10 números aleatórios e grave-os em um    arquivo    de    texto    chamado “aleatorio.txt”.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE *archive;
	archive = fopen("numbers.txt", "w");
	if(archive == NULL)
	{
    	printf("\nError!");
    	return 1;
	}

	int num_array[10];

	srand(time(NULL));

	for(int i = 0; i < 10; i++)
	{
    	num_array[i] = rand() % 100;
    // o %100 serve como um divisor. Se um número 7450 é gerado ocorrerá uma divisão por 100 onde o quociente será 74 com resto 50. Dessa forma, o número selecionado será 74
	}

	for(int i = 0; i < 10; i++)
	{
    	fprintf(archive, "\n%d", num_array[i]);
	}
    
	return 0;
}
